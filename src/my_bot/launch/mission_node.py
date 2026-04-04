#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from std_msgs.msg import String  # ← Để gửi lệnh LIFT

def main():
    rclpy.init()

    # Node riêng để publish lệnh LIFT
    node = rclpy.create_node('agv_mission_node')
    lift_pub = node.create_publisher(String, '/lift_cmd', 10)

    navigator = BasicNavigator()

    # ========== Set Initial Pose (lấy từ map thật) ==========
    initial_pose = PoseStamped()
    initial_pose.header.frame_id = 'map'
    initial_pose.header.stamp = navigator.get_clock().now().to_msg()
    initial_pose.pose.position.x = -8.9765   # ← Lấy từ RViz2
    initial_pose.pose.position.y =  8.1152
    initial_pose.pose.orientation.z = 0.0
    initial_pose.pose.orientation.w = 1.0
    navigator.setInitialPose(initial_pose)

    navigator.waitUntilNav2Active()
    print("Nav2 sẵn sàng!")

    # ========== Định nghĩa điểm đến ==========
    goal_pose = PoseStamped()
    goal_pose.header.frame_id = 'map'
    goal_pose.header.stamp = navigator.get_clock().now().to_msg()
    goal_pose.pose.position.x =  8.3832   # ← Lấy từ RViz2
    goal_pose.pose.position.y = -9.0362
    goal_pose.pose.orientation.w = 1.0

    print(f"Đang đi đến: x={goal_pose.pose.position.x}, y={goal_pose.pose.position.y}")

    # ========== Điều hướng ==========
    navigator.navigateToPose(goal_pose)  # ← Đổi sang cái này

    while not navigator.isTaskComplete():
        feedback = navigator.getFeedback()
        if feedback:
            print(f"Còn cách đích: {feedback.distance_remaining:.2f} m")

    # ========== Xử lý kết quả ==========
    result = navigator.getResult()

    if result == TaskResult.SUCCEEDED:
        print('Đến nơi! Bắt đầu nâng hàng...')

        # Gửi lệnh LIFT_UP lên topic
        msg = String()
        msg.data = 'LIFT_UP'
        lift_pub.publish(msg)

        # Chờ một chút rồi dừng (hoặc chờ feedback LIFT_DONE)
        import time
        time.sleep(3.0)

        msg.data = 'LIFT_STOP'
        lift_pub.publish(msg)
        print('Nâng xong!')

    elif result == TaskResult.CANCELED:
        print('Đã hủy!')
    elif result == TaskResult.FAILED:
        print('Thất bại!')

    navigator.lifecycleShutdown()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

### Lấy tọa độ x, y từ map thật như thế nào?
##1. Chạy Nav2 + RViz2
##2. Trong RViz2 → click "Publish Point" (thanh toolbar)
##3. Click vào vị trí trên map
##4. Terminal sẽ hiện: x=..., y=...  ← copy vào code
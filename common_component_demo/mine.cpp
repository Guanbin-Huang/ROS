#include "ros/ros.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "geometry_msgs/TransformStamped.h"
#include "geometry_msgs/PointStamped.h"


int main(int argc, char* argv[])
{
    // 1.包含头文件;
    // 2,编码、初始化、NodeHandle;
    ros::init(argc, argv,"multi_frames_sub");
    ros::NodeHandle nh;

    //3,创建订阅对象;
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener sub(buffer);
    
    //4,编写解析逻辑;
    // 创建坐标点(dummy point)
    geometry_msgs::PointStamped psAtSon1;
    psAtSon1.header.stamp = ros::Time::now();
    psAtSon1.header.frame_id = "son1";
    psAtSon1.point.x         = 1.0;
    psAtSon1.point.y         = 2.0;
    psAtSon1.point.z         = 3.0;

    ros::Rate rate(10);
    while (ros::ok()){
        // 核心
        try{

            //1. 计算son1和son2的相对关系

            //2. 计算son1中某个坐标点在son2中的坐标值(所以事先得先定义一个坐标点)
            geometry_msgs::PointStamped psAtSon2 = buffer.transform(psAtSon1, "son2");
            ROS_INFO("point at Son2 is (%.2f,%.2f,%.2f)",
                    psAtSon2.point.x,
                    psAtSon2.point.y,
                    psAtSon2.point.z
                );
        }
        catch(const std::exception& e){
            ROS_INFO("EXCEPTION: %s", e.what());
        }

        rate.sleep();
        ros::spinOnce();
    }

    return 0;
}
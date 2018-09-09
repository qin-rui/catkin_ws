#ifndef IMAGE_VIEW_H__
#define IMAGE_VIEW_H__

#include <ros/ros.h>
#include <sensor_msgs/Image.h>

class ImageView 
{
public: 
    ImageView(const ros::NodeHandle& node); 

private: 
    void OnImageMessage(const sensor_msgs::ImageConstPtr& msg); 

private: 
    ros::NodeHandle _node; 
    ros::Subscriber _sub; 
};

#endif 

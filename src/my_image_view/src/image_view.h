#ifndef IMAGE_VIEW_H__
#define IMAGE_VIEW_H__

#include <ros/ros.h>

class ImageView 
{
public: 
    ImageView(const ros::NodeHandle& node); 

private: 
    ros::NodeHandle _node; 

};

#endif 

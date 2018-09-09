#include "image_view.h"
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


ImageView::ImageView(const ros::NodeHandle& node)
: _node(node)
{
    _sub = _node.subscribe("/cv_camera/image_raw", 1, &ImageView::OnImageMessage, this);
    ROS_INFO("Subscribe topic: /cv_camera/image_raw");
}

void ImageView::OnImageMessage(const sensor_msgs::ImageConstPtr& msg)
{
    ROS_INFO("Image received...");
    cv_bridge::CvImageConstPtr cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
    assert(cv_ptr);  
    cv::imshow("view", cv_ptr->image); 
    cv::waitKey(30); 
}

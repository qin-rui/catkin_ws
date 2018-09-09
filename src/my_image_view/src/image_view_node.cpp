#include <ros/ros.h>
//#include "image_view.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "my_image_view");
    ros::NodeHandle node("~");
    //ImageView view(node); 
    ros::spin(); 
    return 0; 
}
/*这是Nagisa学习用C++类来编写一个发布者节点的开始，内含极多注释
全权作为学习笔记，将所有常用的函数和类的用法都记录在这里
*/

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class MygoSubscriber : public rclcpp::Node
{
public:
    MygoSubscriber() : Node("mygo_subscriber")
    {
        // 创建一个订阅者，订阅名为 "mygo_topic" 的话题
        subscription_ = this->create_subscription<std_msgs::msg::String>("mygo_topic", 10,std::bind(&MygoSubscriber::topic_callback, this, std::placeholders::_1)
        );
    }

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
    {
        // 接收到消息时打印日志
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MygoSubscriber>());
    rclcpp::shutdown();
    return 0;
}
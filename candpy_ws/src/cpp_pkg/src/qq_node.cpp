/*这是Nagisa学习用C++类来编写一个发布者节点的开始，内含极多注释
全权作为学习笔记，将所有常用的函数和类的用法都记录在这里
*/

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <memory>

using namespace std::chrono_literals;
class MygoPublisher : public rclcpp::Node
{
    public:
        MygoPublisher(): 
        Node("mygo_publisher")
        {
            publisher_ = this->create_publisher<std_msgs::msg::String>("mygo_topic", 10);
            timer_ = this->create_wall_timer(500ms, std::bind(&MygoPublisher::timer_callback, this));
        }
/*create_publisher函数的用法
template<typename MessageT>
rclcpp::Publisher<MessageT>::SharedPtr create_publisher(
  const std::string & topic_name,
  rclcpp::QoS qos = rclcpp::QoS(10).best_effort());
  注意（1）！！！ROS2中的模版函数使用时需要再传参前加入模版类型的确定，即上述的
  <std_msgs::msg::String>
  否则编译器不知道你要创建什么类型的Publisher
（2）create_publisher是rclcpp::Publisher 类型的共享指针，所以需要用SharedPtr来接收
rclcpp::Publisher<std_msgs::msg::String>::SharedPtr
  ========================================================================
create_wall_timer函数的用法 
template<typename CallbackT>
rclcpp::TimerBase::SharedPtr create_wall_timer(
std::chrono::nanoseconds period,
CallbackT callback);这个callback是一个函数指针，会按照第一个参数的间隔时间来调用
*/
    private:
    void timer_callback()
    {
        auto message = std_msgs::msg::String();
        message.data = "我喜欢mygo!!!!!";//这两句话给要发送的数据类型定义并赋值
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);//这句话将消息发送
    }
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MygoPublisher>());  
  /*std::make_shared<MygoPublisher>() 创建一个 MygoPublisher 的共享指针实例，并将其传递给 spin 函数。
spin 会持续运行，处理所有来自 ROS 2 的事件（如定时器触发、消息接收等），直到节点被显式关闭。*/
  rclcpp::shutdown();
  return 0;
}
        

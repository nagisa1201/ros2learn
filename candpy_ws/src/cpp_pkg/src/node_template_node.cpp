#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

template<typename MessageT>
class NodeWrapper {
public:
    NodeWrapper(const std::string & node_name, const std::string & pub_topic, const std::string & sub_topic, bool is_publisher)
        : node_(std::make_shared<rclcpp::Node>(node_name)) 
    {
        if (is_publisher) 
        {
            publisher_ = node_->create_publisher<MessageT>(pub_topic, rclcpp::QoS(rclcpp::KeepLast(10)));
        }
        else
        {
            subscriber_ = node_->create_subscription<MessageT>(
                sub_topic,
                rclcpp::QoS(rclcpp::KeepLast(10)),
                [this](const typename MessageT::SharedPtr msg) { on_message(msg); });
        }
    }

    void publish(const MessageT & message) 
    {
        if (publisher_) 
        {
            publisher_->publish(message);
        }
    }

    rclcpp::Node::SharedPtr get_node() 
    {
        return node_;
    }

private:
    void on_message(const typename MessageT::SharedPtr msg) {
        RCLCPP_INFO(node_->get_logger(), "Received message: '%s'", msg->data.c_str());
    }

    rclcpp::Node::SharedPtr node_;
    typename rclcpp::Publisher<MessageT>::SharedPtr publisher_;
    typename rclcpp::Subscription<MessageT>::SharedPtr subscriber_;
};

// 示例使用
int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    // 创建订阅者
    auto sub_node = std::make_shared<NodeWrapper<std_msgs::msg::String>>("sub_node", "mygo", "mygo", false);

    // 创建发布者
    auto pub_node = std::make_shared<NodeWrapper<std_msgs::msg::String>>("pub_node", "mygo", "mygo", true);

    // 发布消息
    std_msgs::msg::String msg;
    msg.data = "我喜欢 mygo!!!!!";
        // 设置发布频率
    rclcpp::WallRate loop_rate(1); // 每秒1次
        while (rclcpp::ok())
    {
        pub_node->publish(msg);
        RCLCPP_INFO(pub_node->get_node()->get_logger(), "Published: '%s'", msg.data.c_str());
        rclcpp::spin_some(sub_node->get_node()); // 确保订阅者能接收到消息
        loop_rate.sleep(); // 按照设定的频率休眠
    }

    rclcpp::shutdown();
    return 0;
}

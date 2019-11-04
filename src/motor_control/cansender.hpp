#include "utils/io/can.hpp"
#include "utils/logger.hpp"


namespace hyped
{
namespace motor_control
{
using utils::Logger;
using utils::io::Can;
using utils::io::CanProccesor;
using utils::io::can::Frame;

class CanSender : public CanProccesor
{
 public:
  /**
   * @brief Construct a new Can Sender object
   *
   * @param log_
   * @param node_id
   */
  CanSender(Logger &log_, uint8_t node_id);

  /**
   * @brief Send a message
   *
   * @param massage
   * @return true
   */
  bool sendMessage(Frame &message);

  /**
   * @brief function to process data received
   *
   * @param message
   */
  void processNewData(Frame &message) override;

  /**
   * @brief Check that the message is meant for this node
   *
   * @param id
   * @param extended
   * @return true
   */
  bool hasId(uint32_t id, bool extended) override;

 private:
  Logger& log_;
  uint8_t node_id_;
  Can& can_;

};

}}  // namespace hyped::motor_control

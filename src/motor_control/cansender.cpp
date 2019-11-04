#include "motor_control/cansender.hpp"

namespace hyped
{
namespace motor_control
{

CanSender::CanSender(Logger &log, uint8_t node_id)
  : log_(log),
    node_id_(node_id),
    can_(Can::getInstance())
{
  can_.start();
}

void CanSender::processNewData(Frame &message)
{
  uint32_t id = message.id;
  if (id == node_id_){
     log_.INFO("MOTOR", "%x",message.data[0], "%x",message.data[1], message.data[2], "%x",message.data[3], "%x",message.data[4], "%x",message.data[5], "%x",message.data[6], "%x",message.data[7]);
}

bool CanSender::sendMessage(utils::io::can::Frame &message)
{
  log_.INFO("MOTOR", "Sending Message");
  can_.send(message);
  return true;
}

bool CanSender::hasId(uint32_t id, bool extended)
{
   if (node_id_ == id) 
   {
     return true; 
   } 

   return false;
}
}}


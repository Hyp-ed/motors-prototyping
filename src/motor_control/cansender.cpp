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
  utils::concurrent::Thread::sleep(1000);
  can_.registerProcessor(this);
}

void CanSender::processNewData(Frame &message)
{
  uint32_t id = message.id;
  if (id == node_id_){
     log_.INFO("MOTOR", "%c%c%c%c%c%c%c%c",message.data[0], message.data[1], message.data[2], message.data[3], message.data[4], message.data[5], message.data[6], message.data[7]);
  }
}

bool CanSender::sendMessage(Frame &message)
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


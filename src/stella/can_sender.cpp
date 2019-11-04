#include <iostream>
#include <atomic>
#include "utils/io/can.hpp"
#include "utils/logger.hpp"
#include "can_sender.hpp"

using hyped::utils::io::can::Frame;
using hyped::utils::Logger;
using hyped::stella::CanSender;
using hyped::utils::io::CanProccesor;
using hyped::utils::io::Can;

namespace hyped {

   namespace stella {

CanSender::CanSender(Logger &log, uint8_t node_id)
 :
    log_(log),
    node_id_(node_id),
    can_(Can::getInstance())
  {

  }


void CanSender::processNewData(Frame &message)
{
  isSending = false;
  uint32_t id = message.id;
  if (id == node_id_){
     log_.INFO("MOTOR", "%x",message.data[0], "%x",message.data[1], message.data[2], "%x",message.data[3], "%x",message.data[4], "%x",message.data[5], "%x",message.data[6], "%x",message.data[7]);
  }



}

bool CanSender::hasId(uint32_t id, bool extend)
{
   if (node_id_ == id) 
   {
     return true; 
   } 

   return false;
}

bool CanSender::getIsSending()
{
  return isSending;
}

bool CanSender::sendMessage(Frame &message)
{
  log_.INFO("MOTOR", "Sending Message");
  can_.send(message);
  isSending = true;

  return true;
}

   }}//namespace hyped::stella

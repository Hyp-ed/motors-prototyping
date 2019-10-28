#include <iostream>
#include "utils/io/can.hpp"
#include "utils/logger.hpp"
#include "can_sender.hpp"

using hyped::utils::io::can::Frame;
using hyped::utils::Logger;
using hyped::stella::CanSender;
using hyped::utils::io::CanProccesor;

CanSender::CanSender(Logger &log, uint8_t node_id)
 :
    log_(log),
    node_id_(node_id)
  {

  }


void CanSender::processNewData(Frame& message){

}

bool hasId(uint32_t id, bool extend){
   return true; // this is here only to overcome the compiler error, it doesn't do something
}
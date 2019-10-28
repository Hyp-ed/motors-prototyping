#include "Michal/CanSender.hpp"

namespace hyped {
namespace cansender {

  CanSender::CanSender(Logger &log, uint8_t node_id): log_(log), node_id_(node_id){
  }

  void CanSender::processNewData(Frame& message){
    uint32_t id = message.id;
    if(id == node_id_){

          log_.INFO("MOTOR","%0x %0x %0x %0x %0x %0x %0x %0x", message.data[0], message.data[1], message.data[2],message.data[3],
                     message.data[4], message.data[5], message.data[6], message.data[7]);

        printf("%x %x %x %x %x %x %x %x", message.data[0], message.data[1], message.data[2],message.data[3],
                     message.data[4], message.data[5], message.data[6], message.data[7]);

    }
    else {
        log_.ERR("MOTOR", "Message has wrong id");
    }
  }

  bool CanSender::hasId(uint32_t id, bool extended) {
    if(id==node_id_){
        return true;
    }
    return false;
  }



}
}

#include "Michal/CanSender.hpp"

namespace hyped {
namespace cansender {

  CanSender::CanSender(Logger &log, uint8_t node_id): log_(log), node_id_(node_id){
  }

  void CanSender::processNewData(Frame& message){

  }

  bool CanSender::hasId(uint32_t id, bool extended) {
  return id != 0;
  }



}
}

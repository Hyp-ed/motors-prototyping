#ifndef MICHAL_CAN_SENDER_HPP_
#define MICHAL_CAN_SENDER_HPP_

#include "utils/io/can.hpp"
#include "utils/logger.hpp"


namespace hyped {
using utils::io::Can;
using utils::io::can::Frame;
using utils::io::CanProccesor;
using utils::Logger;

namespace cansender {


class CanSender: public CanProccesor {

public:

  CanSender(Logger &log, uint8_t node_id);

  void processNewData(Frame& message);

  bool hasId(uint32_t id, bool extended);

private:
  Logger& log_;
  uint8_t node_id_;

};


}
}
#endif

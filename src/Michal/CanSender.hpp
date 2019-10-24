#ifndef MICHAL_CAN_SENDER_HPP_
#define MICHAL_CAN_SENDER_HPP_

#include "utils/io/can.hpp"



namespace hyped {
using utils::io::Can;
using utils::io::can::Frame;
using utils::io::CanProccesor;

namespace cansender {


class CanSender: public CanProccesor {

void processNewData(Frame& message);

bool hasId(uint32_t id, bool extended);


};


}
}
#endif

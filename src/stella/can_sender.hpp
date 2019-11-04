#include <iostream>
#include "utils/io/can.hpp"
#include "utils/logger.hpp"
#include <atomic>

using::hyped::utils::io::can::Frame; 
using::hyped::utils::Logger;
using::hyped::utils::io::CanProccesor;
using::hyped::utils::io::Can;

namespace hyped {
namespace stella {



class CanSender : public CanProccesor
{
    public:
    void processNewData(Frame& message) override;
    bool hasId(uint32_t id, bool extended) override;
    bool sendMessage(Frame &message);
    bool getIsSending();
    CanSender(Logger &log, uint8_t node_id);
    private:
    Logger& log_;
    uint8_t node_id_;
    std::atomic<bool> isSending;
    Can &can_; 

};

}} //namespace hyped::stella

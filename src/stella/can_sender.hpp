#include <iostream>
#include "utils/io/can.hpp"
#include "utils/logger.hpp"


using::hyped::utils::io::can::Frame; 
using::hyped::utils::Logger;
using::hyped::utils::io::CanProccesor;

namespace hyped {
namespace stella {



class CanSender : public CanProccesor {
    public:
    void processNewData(Frame& message) override;
    bool hasId(uint32_t id, bool extended) override;
    CanSender(Logger &log, uint8_t node_id);
    private:
    Logger log_;
    uint8_t node_id_;

};

}} //namespace hyped::stella

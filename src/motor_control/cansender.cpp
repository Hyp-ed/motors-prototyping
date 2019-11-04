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
{}

bool CanSender::hasId(uint32_t id, bool extended)
{
  return true;
}
}}
#include "utils/logger.hpp"
#include "utils/system.hpp"
#include "Michal/CanSender.hpp"
#include "utils/io/can.hpp"

using hyped::utils::Logger;
using hyped::utils::System;
using hyped::utils::io::can::Frame;
using hyped::cansender::CanSender;

int main(int argc, char** argv)
{
  System::parseArgs(argc, argv);
  Logger log = System::getLogger();

  log.INFO("MAIN", "Placeholder main program");
  CanSender cansender(log, 12);

  Frame message;
  message.id=12;
  message.data[0]=10;
  cansender.processNewData(message);


}

#include "utils/logger.hpp"
#include "utils/system.hpp"

using hyped::utils::Logger;
using hyped::utils::System;

int main(int argc, char** argv)
{
  System::parseArgs(argc, argv);
  Logger log = System::getLogger();

  log.INFO("MAIN", "Placeholder main program");
}
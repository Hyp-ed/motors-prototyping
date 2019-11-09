#include <stdio.h>
#include "utils/logger.hpp"
#include "utils/system.hpp"
#include "motor_control/cansender.hpp"
#include "utils/io/can.hpp"
#include "utils/concurrent/thread.hpp"

using hyped::utils::Logger;
using hyped::utils::System;
using hyped::motor_control::CanSender;
using hyped::utils::concurrent::Thread;
using hyped::utils::io::can::Frame;

void getMessage(char* str)
{
  puts("Enter a message (< 8 chars):");
  for (int i = 0; i < 8; i++){
    char c = getchar();
    if (c == '\n') {
      break;
    }
    str[i] = c;
  }

}

int main(int argc, char** argv)
{
  System::parseArgs(argc, argv);
  Logger log = System::getLogger();

  CanSender* cansender = new CanSender(log, 1);
  Frame message;
  message.id=1;
  message.len = 8;

  char str[] = {32,32,32,32,32,32,32,32};
  getMessage(str);

  for(int i = 0; i<8; i++) {
    message.data[i] = (uint8_t) str[i];
  }

  cansender->sendMessage(message);
  Thread::sleep(10);
}

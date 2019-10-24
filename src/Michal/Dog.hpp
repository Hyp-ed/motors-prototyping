#ifndef DOG
#define DOG

#include <iostream>
#include <string>
#include "utils/logger.hpp"
namespace hyped {
namespace animals {

class Dog {
 public:
  void bark();
  void setName(std::string name);
  void setWeight(double weight);
  void setHeight(double height);
  std::string getName();
  double getWeight();
  double getHeight();
  Dog(std::string name, double weight, double height);

 private:
  std::string name_;
  double weight_;
  double height_;


};


}
}
#endif // DOG

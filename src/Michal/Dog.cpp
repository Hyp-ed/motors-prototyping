#include "Michal/Dog.hpp"

namespace hyped {
namespace animals {

  Dog::Dog(std::string name, double weight, double height){
    name_ = name;
    weight_ = weight;
    height_ = height;
  }
  void Dog::bark(){
    // bark
  }
  void Dog::setName(std::string name){
    name_ = name;
  }
  void Dog::setWeight(double weight){
    weight_ = weight;
  }
  void Dog::setHeight(double height){
    height_ = height;
  }
  std::string Dog::getName(){
    return name_;
  }
  double Dog::getWeight(){
    return weight_;
  }
  double Dog::getHeight(){
    return height_;
  }




}
}

#include "utils/system.hpp"
#include "utils/logger.hpp"


namespace hyped {
namespace iain {

class Penguin {
 public:
  explicit Penguin(int age);

  void makeNoise();

 private:
  int age_;
};

}
}
#include "hellolib.h"

void mylibrary::helloWorld(const std::string &message) {
  std::cout << message << std::endl;
}

int mylibrary::addTwoNumbers(const int a, const int b) {
  return a + b;
}

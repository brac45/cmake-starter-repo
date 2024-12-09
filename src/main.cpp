#include <iostream>
#include "hellolib.h"

int main() {
  std::string hellomsg = "Hello, World!";

  mylibrary::helloWorld(hellomsg);

  return 0;
}
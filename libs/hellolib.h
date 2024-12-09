#ifndef HELLOLIB_H
#define HELLOLIB_H

#include <iostream>
#include <string>

namespace mylibrary {
  void helloWorld(const std::string &message);

  int addTwoNumbers(int a, int b);
}

#endif
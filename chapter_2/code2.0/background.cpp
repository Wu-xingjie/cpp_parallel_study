#include "background.h"
#include <iostream>

void BackGround_test::display() {
  std::cout << "hello parallel world!" << std::endl;
}

void BackGround_test::operator()() { display(); }
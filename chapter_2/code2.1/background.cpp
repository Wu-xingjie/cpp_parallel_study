#include "background.h"
#include <iostream>

void BackGround_test::display() {
  std::cout << "hello parallel world!" << std::endl;
}

void BackGround_test::operator()() {
  for (int i = 0; i < _num; i++) {
    display();
  }
}
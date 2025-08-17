#include "background.h"
#include <thread>

int main() {
  BackGround_test test;

  std::thread sub_thread(test);
  sub_thread.join();
  return 0;
}
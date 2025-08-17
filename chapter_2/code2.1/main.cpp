#include "background.h"
#include <thread>

int main() {
  int num = 5;
  BackGround_test test(num);
  std::thread sub_thread(test);
  sub_thread.join();
  // sub_thread.detach();
  return 0;
}
#pragma once

class BackGround_test {
public:
  BackGround_test(int &num) : _num(num) {}
  void operator()();
  void display();

private:
  int &_num;
};
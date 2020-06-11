#include <iostream>

using namespace std;

int func(int a) {
  cout << "func(int)" << endl;
  return 0;
}

void func(int i, int j) {
  cout << "func(int,int)" << endl;
}

void func(int a, float b) {
  cout << "func(int,float)" << endl;
}

int main(void) {
  func(10);
  func(10, 20);
  func(10, 1.23f);

  //通过函数调用重载关系的函数时,根据函数
  //指针的类型决定其匹配的重载版本
  void (*pfunc)(int, float) = func;
  pfunc(10, 20);//func(int,float)

  return 0;
}





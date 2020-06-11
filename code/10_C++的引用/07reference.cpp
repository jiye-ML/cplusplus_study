#include <iostream>

using namespace std;

int main(void) {
  int a = 100;
  int &b = a;//b引用a,b就是a的别名
  cout << "a=" << a << ", b=" << b << endl;
  cout << "&a=" << &a << ",&b=" << &b << endl;

  //int& b2;//error,引用定义时必须初始化
  int c = 200;
  b = c;//将c赋值给b,等于a赋值一样
  cout << "a=" << a << ",b=" << b << endl;
  cout << "&a=" << &a << ",&b=" << &b << endl;

  //char& rc = c;//error

  return 0;
}






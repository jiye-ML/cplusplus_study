#include <iostream>

using namespace std;

//函数声明
void func(int a, int b = 0, int c = 0);

//void func(int i,int j){}//注意歧义错误
int main(void) {
  func(10, 20, 30);
  func(10, 20);//10 20 0
  func(10);//10 0 0
  return 0;
}

//函数定义
void func(int a, int b/*=0*/, int c/*=0*/) {
  cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}



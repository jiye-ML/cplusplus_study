#include <iostream>

using namespace std;

int main(void) {
  int *pi = new int();
  *pi = 100;
  cout << *pi << endl;
  delete pi;//避免内存泄露
  pi = NULL;//避免野指针

  //分配内存同时初始化
//  int* pi2 = new int(200);
//  cout << *pi2 << endl;
//  cout << *pi2 << endl;//200
//  (*pi2)++;
//  cout << *pi2 << endl;//201
//  delete pi2;
//  pi2 = NULL;

  //new数组
  int *parr = new int[10];
  for (int i = 0; i < 10; i++) {
    parr[i] = i + 1;
    cout << parr[i] << ' ';
  }
  cout << endl;
  delete[] parr;
  parr = NULL;
  //new数组同时初始化,C++11支持
  int *parr2 = new int[10]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  for (int i = 0; i < 10; i++) {
    cout << parr2[i] << ' ';
  }
  cout << endl;
  delete[] parr2;
  parr2 = NULL;

  return 0;
}










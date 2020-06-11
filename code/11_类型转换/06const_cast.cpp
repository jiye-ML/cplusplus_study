#include <iostream>

using namespace std;

int main() {
  /* volatile修饰变量表示易变的,告诉编译器
   * 每次在使用该变量时都要小心从内存中重
   * 新读取,不要直接使用寄存器中的副本,防
   * 止编译器优化导致的错误结果 */
  volatile const int ci = 100;
  int *pci = const_cast<int *>(&ci);
  *pci = 200;

  cout << "ci=" << ci << endl;//200
  cout << "*pci=" << *pci << endl;//200
  cout << "&ci=" << (void *) &ci << endl;
  cout << "pci=" << pci << endl;

  return 0;
}

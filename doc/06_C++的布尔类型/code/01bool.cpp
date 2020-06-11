#include <iostream>

using namespace std;

int main() {

  bool b = false;

  cout << "b=" << b << endl;//0
  cout << "sizeof(b)=" << sizeof(b) << endl;

  b = 3 + 5;
  cout << "b=" << b << endl;//1

  b = 1.2 * 3.4;
  cout << "b=" << b << endl;//1


  int *p = nullptr; //(void*)0
  b = p;
  cout << "b=" << b << endl;//0

  return 0;
}





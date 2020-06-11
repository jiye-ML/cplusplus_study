#include <iostream>

using namespace std;

int main(void) {
  //"\000"-->'\0'-->0
  char buf[] = "0001\00012345678\000123456";
  struct Net {
      char type[5];
      char id[9];
      char passwd[7];
  };
  Net *pn = reinterpret_cast<Net *>(buf);
  cout << pn->type << endl;//0001
  cout << pn->id << endl;//12345678
  cout << pn->passwd << endl;//123456

  return 0;
}




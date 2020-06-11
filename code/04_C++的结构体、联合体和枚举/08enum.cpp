#include <iostream>

using namespace std;

int main(void) {
  enum Color {
      RED = 10,
      YELLOW,
      BLUE
  };

  cout << RED << ',' << YELLOW << ',' << BLUE << endl;

  /*enum*/ Color c;
  //c = 12;
  c = BLUE;
  cout << c << endl;//12

  return 0;
}




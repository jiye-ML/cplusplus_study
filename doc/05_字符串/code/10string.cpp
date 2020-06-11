#include <iostream>

using namespace std;

int main() {
  string str;
  cout << "请输入一个字符串:" << endl;
  //cin >> str; //默认空白符结束
  getline(cin, str);//默认在换行时结束
  int num = 0;
  for (char i : str) {
    if (i == 'a' || i == 'A') {
      num++;
    }
  }
  cout << "包含字符A/a的个数是:" << num << endl;

  return 0;
}






#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "请输入一个字符串:" << endl;
  cin >> str;
  int len = str.size();
  //"abcdef"
  for (int i = 0; i < len / 2; i++) {
    str[i] = str[i] ^ str[len - 1 - i];
    str[len - 1 - i] = str[i] ^ str[len - i - 1];
    str[i] = str[i] ^ str[len - i - 1];
  }
  cout << "逆序输出:" << str << endl;
  return 0;
}
//int i1 = 3,i2 = 5;
//i1 = i1 ^ i2 //011 ^ 101 = 110(i1)
//i2 = i1 ^ i2 //110 ^ 101 = 011(i2):3
//i1 = i1 ^ i2 //110 ^ 011 = 101(i1):5






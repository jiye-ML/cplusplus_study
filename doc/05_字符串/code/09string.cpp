#include <iostream>
#include <string>

using namespace std;


int main() {

  //定义字符串
  string s = "hello";
  cout << s << endl;

  //拷贝
  string s2;
  s2 = s;
  cout << s2 << endl;//hello

  //连接
  string s3 = "world";
  s3 = s + s3;
  cout << s3 << endl;//helloworld

  s2 += "world";//s2 = s2 + "world"
  cout << s2 << endl;//helloworld

  //比较
  if (s2 == s3) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  //随机访问
  s2[0] = 'H';
  s2[5] = 'W';
  cout << s2 << endl;//HelloWorld

  //获取字符串长度
  cout << s2.size() << endl;//10
  cout << s2.length() << endl;//10

  //转换C风格字符串
  cout << strlen(s2.c_str()) << endl;//10

  return 0;
}




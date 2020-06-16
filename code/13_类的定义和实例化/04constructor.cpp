#include <iostream>

using namespace std;

class Student {
public:
    Student(const string &name, int age, int no) {
      cout << "构造函数" << endl;
      m_name = name;
      m_age = age;
      m_no = no;
    }

    Student(const string &name = "无名") {
      cout << "构造函数重载版本" << endl;
      m_name = name;
      m_age = 0;
      m_no = 0;
    }

    void who(void) {
      cout << "我叫" << m_name << ",今年" <<
           m_age << "岁,学号是" << m_no <<
           endl;
    }

private:
    string m_name;
    int m_age;
    int m_no;
};

int main(void) {
  //创建对象
  //(...):指明构造函数需要的实参
  Student s("张飞", 28, 10011);
  s.who();

  Student s2("赵云");
  s2.who();

  Student s3;//选择无参方式
  s3.who();

  return 0;
}






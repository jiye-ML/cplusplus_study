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
  //在栈区创建单个对象
  //Student s("张飞",28,10011);
  Student s = Student("张飞", 28, 10011);
  s.who();
  //在栈区创建多个对象
  Student sarr[3] = {
     Student("貂蝉", 25, 10012),
     Student("林黛玉", 24, 10013),
     Student("孙尚香", 27, 10014)};
  sarr[0].who();
  sarr[1].who();
  sarr[2].who();

  //在堆区创建单个对象
  Student *ps = new Student("小乔", 26, 10015);
  ps->who();//(*ps).who()
  delete ps;
  ps = NULL;

  //在堆区创建多个对象
  Student *parr = new Student[3]{
     Student("大乔", 27, 10016),
     Student("潘金莲", 28, 10017),
     Student("孙二娘", 35, 10018)};
  parr[0].who();//(*(parr+0)).who()
  parr[1].who();//(*(parr+1)).who()
  parr[2].who();//(*(parr+2)).who()
  delete[] parr;
  parr = NULL;

  return 0;
}






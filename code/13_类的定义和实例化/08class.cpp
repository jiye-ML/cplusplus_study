#include <iostream>

using namespace std;

//原来定义结构体,现在定义类
//struct Student{
class Student {
public:
    //行为:成员函数
    void eat(const string &food) {
      cout << "我在吃" << food << endl;
    }

    void sleep(int time) {
      cout << "我睡了" << time << "小时"
           << endl;
    }

    void learn(const string &course) {
      cout << "我在学" << course << endl;
    }

    void who(void) {
      cout << "我叫" << m_name << ",今年"
           << m_age << "岁,学号是" << m_no
           << endl;
    }

public:
    /* 类中私有成员不能在外部直接访问,但是可
     * 以提供公有的成员函数间接的进行访问，
     * 在函数中可以对非法数据加以限定，控制
     * 业务逻辑的合理性－－封装*/
    void setName(const string &name) {
      if (name == "二")
        cout << "你才二" << endl;
      else
        m_name = name;
    }

    void setAge(int age) {
      if (age < 0)
        cout << "无效年龄" << endl;
      else
        m_age = age;
    }

    void setNo(int no) {
      if (no < 10000)
        cout << "无效学号" << endl;
      else
        m_no = no;
    }

private:
    //属性:成员变量
    string m_name;
    int m_age;
    int m_no;
};

int main(void) {
  //原来叫定义结构体变量
  //现在叫创建对象或者实例化对象
  Student s;
  /*s.m_name = "张飞";
  s.m_name = "二";
  s.m_age = 28;
  s.m_no = 10086;*/
  s.setName("张翼德");
  s.setName("二");
  s.setAge(29);
  s.setAge(-2);
  s.setNo(10011);
  s.setNo(290);

  s.who();
  s.eat("兰州拉面");
  s.sleep(8);
  s.learn("C++编程");

  return 0;
}













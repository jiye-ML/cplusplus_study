#include <iostream>
using namespace std;
//人类(基类)
class Human{
public:
    Human(const string& name,int age)
        :m_name(name),m_age(age){}
    void eat(const string& food){
        cout << "我在吃" << food << endl;
    }
    void sleep(int time){
        cout << "我睡了" << time << "小时"
            << endl;
    }
protected:
    //保护成员可以子类和当前类的内部使用
    string m_name;
    int m_age;
};
//学生类(人类的一个子类)
class Student:public Human{
public:
    //"Human(..)"说明基类部分成员的初始化方式
    Student(const string& name,int age,int no)
        :Human(name,age),m_no(no){}
    void learn(const string& course){
        cout << "我在学" << course << endl;
    }
    void who(void){
        cout << "我叫" << m_name << ",今年" <<
            m_age << "岁,学号是" << m_no <<
            endl;
    }
private:
    int m_no;//学号
};
//教师类(人类的另一个子类)
class Teacher:public Human{
public:
    Teacher(const string& name,int age, 
        int salary):Human(name,age),
                    m_salary(salary){}
    void teach(const string& course){
        cout << "我在讲" << course << endl;
    }
    void who(void){
        cout << "我叫" << m_name << ",今年" <<
            m_age << "岁,工资是" << m_salary 
            << endl;
    }
private:
    int m_salary;
};
int main(void)
{
    Student s("关羽",30,10011);
    s.who();
    s.eat("兰州拉面");
    s.sleep(8);
    s.learn("孙武兵法");
    
    Teacher t("孙悟空",35,50000);
    t.who();
    t.eat("桃子");
    t.sleep(7);
    t.teach("unix系统编程");

    Student* ps = &s;
    //Student*-->Human*:向上造型
    Human* ph = ps;
    ph->eat("盒饭");
    ph->sleep(6);
    //ph->learn("C++");

    //Human*-->Student*:向下造型(合理)
    ps = static_cast<Student*>(ph);
    ps->who();

    Human h("王建立",47);
    //Human*-->Student*:向下造型(不合理)
    Student* ps2 = static_cast<Student*>(&h);
    ps2->who();

    return 0;
}









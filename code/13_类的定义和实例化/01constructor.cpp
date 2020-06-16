#include <iostream>
using namespace std;
class Student{
public:
    Student(const string&name,int age,int no){
        cout << "构造函数" << endl;
        m_name = name;
        m_age = age;
        m_no = no;
    }
    void who(void){
        cout << "我叫" << m_name << ",今年" <<
            m_age << "岁,学号是" << m_no <<
            endl;
    }
private:
    string m_name;
    int m_age;
    int m_no;
};
int main(void)
{
    //创建对象
    //(...):指明构造函数需要的实参
    Student s("张飞",28,10011);
    s.who();
    
    //构造函数总是自动被调用,不能显式调用
    //s.Student("张三",29,10012);//error

    return 0;
}






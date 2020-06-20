//单例模式:饿汉式
#include <iostream>
using namespace std;
class Singleton{
public:
    //3)使用静态成员函数获取单例对象
    static Singleton& getInstance(void){
        return s_instance;
    }
    void print(void) const {
        cout << m_data << endl;
    }
private:
    //1)私有化构造函数
    Singleton(int data):m_data(data){
        cout << "单例对象被创建了" << endl;
    }
    //将拷贝构造函数声明为私有
    Singleton(const Singleton&);
    //2)使用静态成员变量表示单例对象
    static Singleton s_instance;
private:
    int m_data;
};
Singleton Singleton::s_instance(123);
int main(void)
{
    cout << "main函数开始执行" << endl;
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    Singleton& s3 = Singleton::getInstance();

    cout << "&s1=" << &s1 << endl;
    cout << "&s2=" << &s2 << endl;
    cout << "&s3=" << &s3 << endl;

    s1.print();
    s2.print();
    s3.print();

    //Singleton s(321);
    //Singleton* ps = new Singleton(321);
    //Singleton s4 = s1;
    //cout << "&s4:" << &s4 << endl;

    return 0;
}









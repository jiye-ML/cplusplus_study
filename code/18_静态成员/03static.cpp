#include <iostream>
using namespace std;
class A{
public:
    //普通成员变量在构造时定义和初始化
    A(int data):m_data(data){}
    int m_data;
    static int s_data;
};
//静态成员变量需要在类的外部单独定义和初始化
int A::s_data = 20;

int main(void)
{
    A a(10);
    cout << "sizeof(a)=" << sizeof(a) << endl;
    //普通成员变量必须通过对象访问
    cout << a.m_data << endl;//10
    //静态成员变量可以通过"类名::"直接访问
    cout << A::s_data << endl;//20
    //静态成员变量也可以通过对象访问
    cout << a.s_data << endl;//20

    A a2(10);
    a2.m_data = 11;
    a2.s_data = 22;

    cout << a.m_data << endl;//10
    cout << a.s_data << endl;//22

    return 0;
}












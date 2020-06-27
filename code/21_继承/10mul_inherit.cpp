#include <iostream>
using namespace std;
class Base1{
public:
    void func(void){
        cout << "Base1的func" << endl;
    }
    int m_data;
};
class Base2{
public:
    void func(int i){
        cout << "Base2的func" << endl;
    }
    typedef int m_data;
};
class Derived:public Base1,public Base2{
public:
    //通过using声明,将两个基类的func都引入到
    //当前子类作用域,让它们形成重载
    //using Base1::func;
    //using Base2::func;
};
int main(void)
{
    Derived d;
    d.Base1::func();
    d.Base2::func(10);

    d.Base1::m_data = 10;
    cout << d.Base1::m_data << endl;//10
    Derived::Base2::m_data data = 20;
    cout << data << endl;//20

    return 0;
}













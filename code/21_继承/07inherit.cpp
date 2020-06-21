#include <iostream>
using namespace std;
class Base{
public:
    Base(void):m_i(0){
        cout << "Base(void)" << endl;
    }
    Base(int i):m_i(i){
        cout << "Base(int)" << endl;
    }
    ~Base(void){
        cout << "~Base(void)" << endl;
    }
    int m_i;
};
class Derived:public Base{
public:
    Derived(void){
        cout << "Derived(void)" << endl;
    }
    //Base(i):指明基类子对象的初始化方式
    Derived(int i):Base(i){
        cout << "Derived(int)" << endl;
    }
    ~Derived(void){
        cout << "~Derived(void)" << endl;
    }
};
int main(void)
{
/*    Derived d;
    cout << d.m_i << endl;
    Derived d2(123);
    cout << d2.m_i << endl;*/
    Base* pb = new Derived(123);
    cout << pb->m_i << endl;
    delete pb;//内存泄露风险

    return 0;
}






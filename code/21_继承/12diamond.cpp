/* 钻石继承，虚继承
 *   A
 *  / \
 * B   C
 *  \ /
 *   D  */
#include <iostream>
using namespace std;
class A{
public:
    A(int data):m_data(data){
        cout << "A子对象:" << this << ",size="
            << sizeof(A) << endl;
    }
protected:
    int m_data;
};
class B:virtual public A{//虚继承
public:
    B(int data):A(data){
        cout << "B子对象:" << this << ",size="
            << sizeof(B) << endl;
    }
    void set(int data){
        m_data = data;
    }
};
class C:virtual public A{//虚继承
public:
    C(int data):A(data){
        cout << "C子对象:" << this << ",size="
            << sizeof(C) << endl;
    }
    int get(void){
        return m_data;
    }
};
class D:public B,public C{
public:
    //虚继承时,末端子类负责构造公共基类子对象
    D(int data):B(data),C(data),A(data){
        cout << "D对象:" << this << ",size="
            << sizeof(D) << endl;
    }
};
int main(void)
{
    D d(100);
    cout << d.get() << endl;//100
    d.set(200);
    cout << d.get() << endl;//200

    return 0;
}














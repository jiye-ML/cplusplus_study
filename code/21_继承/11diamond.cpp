/* 钻石继承
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
class B:public A{
public:
    B(int data):A(data){
        cout << "B子对象:" << this << ",size="
            << sizeof(B) << endl;
    }
    void set(int data){
        m_data = data;
    }
};
class C:public A{
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
    D(int data):B(data),C(data){
        cout << "D对象:" << this << ",size="
            << sizeof(D) << endl;
    }
};
int main(void)
{
    D d(100);
    cout << d.get() << endl;//100
    d.set(200);
    cout << d.get() << endl;//100?200

    return 0;
}














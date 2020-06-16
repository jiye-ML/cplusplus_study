#include <iostream>
using namespace std;
class A{
public:
    A(int i){
        cout << "A(int)" << endl;
        m_i = i;
    }
    int m_i;
};
class B{
public:
    B(void):m_a(123){
        cout << "B(void)" << endl;
    }
    A m_a;//成员子对象
};
int main(void)
{
    B b;
    cout << b.m_a.m_i << endl;//123
    return 0;
}







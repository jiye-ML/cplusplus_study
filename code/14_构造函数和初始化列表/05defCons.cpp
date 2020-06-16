#include <iostream>
using namespace std;
class A{
public:
    /*A(void){
        m_i = 0;
    }*/
    A(int i=0){
        cout << "A(void)" << endl;
        m_i = i;
    }
    int m_i;
};
class B{
public:
    int m_j;//基本类型成员变量
    A m_a;//类类型成员变量(成员子对象)
};
int main(void)
{
    B b;
    cout << b.m_j << endl;
    cout << b.m_a.m_i << endl;
    cout << b.m_a.m_i << endl;
    return 0;
}














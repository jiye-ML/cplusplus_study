#include <iostream>
using namespace std;
class A{
public:
    A(int i=0){
        cout << "A(int=0)" << endl;
        m_i = i;
    }
    A(const A& that){
        cout << "A的拷贝构造函数" << endl;
        m_i = that.m_i;
    }
    int m_i;
};
class B{
public:
    A m_a;//成员子对象
};
int main(void)
{
    B b1;//匹配缺省无参构造
    B b2(b1);//匹配缺省拷贝构造
    cout << b1.m_a.m_i << endl;//0
    cout << b2.m_a.m_i << endl;//0
    return 0;
}






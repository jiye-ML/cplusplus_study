#include <iostream>
using namespace std;
int num = 10;
class A{
public:
    /*A(void){//error
        m_r = num;
        m_c = 20;
    }*/
    A(void):m_r(num),m_c(20){}
    int& m_r;
    const int m_c;
};
int main(void)
{
    A a;
    cout << a.m_r << endl;//10
    cout << a.m_c << endl;//20
    return 0;
}







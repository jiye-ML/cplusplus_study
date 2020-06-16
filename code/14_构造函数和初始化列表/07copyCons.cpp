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
int main(void)
{
    const A a1(123);
    //A a2(a1);//匹配拷贝构造函数
    A a2 = a1;//和上面完全等价
    cout << a1.m_i << endl;
    cout << a2.m_i << endl;
    
    return 0;
}






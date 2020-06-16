#include <iostream>
using namespace std;
class A{
public:
    A(int data = 0):m_data(data){}
    //void print(const A* this)
    void print(void) const {//常函数
        cout << m_data++ << endl;
        //cout << const_cast<A*>(this)
        //            ->m_data++ << endl;
    }
private:
    mutable int m_data;
};
int main(void)
{
    A a(100);
    a.print();//A::print(&a);
    a.print();//A::print(&a);
    return 0;
}









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
    Base(const Base& that):m_i(that.m_i){
        cout << "Base(const Base&)" << endl;
    }
    Base& operator=(const Base& that){
        cout << "Base::operator=" << endl;
        if(&that != this){
            m_i = that.m_i;
        }
        return *this;
    }
    int m_i;
};
class Derived:public Base{
public:
    Derived(void):m_i(0){
        cout << "Derived(void)" << endl;
    }
    Derived(int i1,int i2):Base(i1),m_i(i2){
        cout << "Derived(int,int)" << endl;   
    }
    //Base(that):指明基类子对象以拷贝方式来初
    //始化
    Derived(const Derived& that)
        :m_i(that.m_i),Base(that){
        cout << "Derived(const Derived&)" 
            << endl;    
    }
    Derived& operator=(const Derived& that){
        cout << "Derived::operator=" << endl;
        if(&that != this){
            m_i = that.m_i;
            //显式调用基类的拷贝赋值函数,完成
            //基类子对象的复制
            Base::operator=(that);
        }
        return *this;
    }
    int m_i;
};
int main(void)
{
    Derived d1(100,200);
    cout << d1.Base::m_i << ',' << d1.m_i <<
        endl;//100,200
    Derived d2(d1);//拷贝构造
    cout << d2.Base::m_i << ',' << d2.m_i <<
        endl;//100,200
    Derived d3;//0,0
    //d3.operator=(d1)
    d3 = d1;//拷贝赋值
    cout << d3.Base::m_i << ',' << d3.m_i <<
        endl;//100,200

    return 0;
}











#include <iostream>
using namespace std;
class A{
public:
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
};
class B:public A{//公有继承
};
class C:protected A{//保护继承
};
class D:private A{//私有继承
};
class X:public B{
    void func(void){
        m_public = 123;
        m_protected = 123;
        //m_private = 123;
    }
};
class Y:public C{
    void func(void){
        m_public = 123;
        m_protected = 123;
        //m_private = 123;
    }    
};
class Z:public D{
    void func(void){
        //m_public = 123;
        //m_protected = 123;
        //m_private = 123;
    }
};

int main(void)
{
    B b;
    b.m_public = 123;
    //b.m_protected = 123;
    //b.m_private = 123;

    C c;
    //c.m_public = 123;
    //c.m_protected = 123;
    //c.m_private = 123;
    
    D d;
    //d.m_public = 123;
    //d.m_protected = 123;
    //d.m_private = 123;

    return 0;
}








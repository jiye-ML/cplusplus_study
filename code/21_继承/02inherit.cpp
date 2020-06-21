#include <iostream>
using namespace std;
class Base{
public:
    Base(void):m_public(10),
                m_protected(20),
                m_private(30){}
    int m_public;
protected:
    int m_protected;
private:
    int m_private;
protected:
    const int& getPrivate(){
        return m_private;
    }
};
class Derived:public Base{
public:
    void print(void){
        cout << m_public << endl;//10
        cout << m_protected << endl;//20
        //cout << m_private << endl;//error
        cout << getPrivate() << endl;//10
    }
};
int main(void)
{
    Derived d;
    d.print();
    cout << "sizeof(d):" << sizeof(d) << endl;
    return 0;
}





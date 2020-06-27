#include <iostream>
using namespace std;
class A{
public:
    A(void){ cout << "A的构造" << endl; }
    ~A(void){ cout << "A的析构" << endl; }
};
class B{
public:
    B(void){
        m_pa = new A;
        if("error"){
            delete m_pa;
            throw -1;
        }
        //...
    }
    ~B(void){
        delete m_pa;
    }
    A* m_pa;
};
int main(void)
{
    try{
        B b;
    }
    catch(int ex){
        cout << "捕获到异常:" << ex << endl;
        return -1;
    }
    return 0;
}






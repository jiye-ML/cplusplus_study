#include <iostream>
using namespace std;
class Base{
public:
    void func(void){
        cout << "Base::func(void)" << endl;
    }
};
class Derived:public Base{
public:
    void func(int i){
        cout << "Derived::func(int)" << endl;
    }
    //将基类中func引入到子类作用域
    //让它们在子类中形成重载
    //using Base::func;
};
int main(void)
{
    Derived d;
    d.func(10);
    //通过"类名::"指明访问的func属于基类作用域
    d.Base::func();
    return 0;
}





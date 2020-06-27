#include <iostream>
using namespace std;
class Base{
public:
    Base(void){
        cout << "基类动态资源分配" << endl;
    }
    virtual ~Base(void){//虚析构函数
        cout << "基类动态资源释放" << endl;
    }
};
class Derived:public Base{
public:
    Derived(void){
        cout << "子类动态资源分配" << endl;
    }
    ~Derived(void){//自动变虚函数
        cout << "子类动态资源释放" << endl;
    }
};
int main(void)
{
    Base* pb = new Derived;
    //pb->析构函数()
    delete pb;
    return 0;
}







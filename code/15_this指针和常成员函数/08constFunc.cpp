#include <iostream>
using namespace std;
class A{
public:
    //void func1(const A* this)
    void func1(void) const {
        cout << "常函数" << endl;
        //func2();//error
    }
    //void func2(A* this)
    void func2(void){
        cout << "非常函数" << endl;
        //func1();//ok
    }
};
int main(void)
{
    A a1;
    a1.func1();//A::func(&a1),A*
    a1.func2();//A::func(&a1),A*
    const A a2 = a1;
    a2.func1();//A::func(&a2),const A*
    //a2.func2();//A::func(&a2),const A*
    
    const A* pa = &a1;//pa常指针
    pa->func1();
    //pa->func2();
    
    const A& ra = a1;//ra常引用
    ra.func1();
    //ra.func2();

    return 0;
}






#include <iostream>
using namespace std;
class A{
public:
    A(void){
        cout << "A(void)" << endl;
    }
    A(const A& that){
        cout << "A(const A&)" << endl;
    }
};
void foo(A a){}
A bar(void){
    A a;//无参
    cout << "&a:" << &a << endl;
    return a;//A tmp = a;//拷贝
}
int main(void)
{
    A a1;//无参
    A a2 = a1;//拷贝
    foo(a1);//拷贝
    
    /* 正常情况bar函数返回结果拷贝到临时对象,
     * 临时对象再拷贝给a3,发生了两次拷贝.
     * 因为编译器优化,让a3直接引用bar函数返回
     * 的a,不再发生拷贝.*/
    //去优化选项:
    //g++ -fno-elide-constructors xx.cpp
    A a3 = bar();//拷贝
    cout << "&a3:" << &a3 << endl;
    return 0;
}









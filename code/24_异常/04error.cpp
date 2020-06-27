#include <iostream>
#include <cstdio>
#include <csetjmp>
using namespace std;
jmp_buf g_env;

class A{
public:
    A(void){ cout << "A的构造" << endl; }
    ~A(void){ cout << "A的析构" << endl; }
};
int func3(void){
    A a;
    FILE *fp = fopen("xx.txt","r");
    if(fp==NULL){
        longjmp(g_env,-1);
    }
    cout << "func3正常执行" << endl;
    return 0;
}
int func2(void){
    A a;
    func3();
    cout << "func2正常执行" << endl;
    return 0;
}
int func1(void){
    A a;
    func2();
    cout << "func1正常执行" << endl;
    return 0;
}
int main(void)
{
    if(setjmp(g_env) == -1){
        cout << "文件打开失败!" << endl;
        return -1;
    }
    func1();
    cout << "main正常执行" << endl;
    return 0;
}













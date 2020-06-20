#include <iostream>
using namespace std;
class Func{
public:
    int operator()(int a,int b){
        return a*b;
    }
    int operator()(int a){
        return a*a;/*  */
    }
};
int main(void)
{
    Func func;
    //func.operator()(100,200);
    cout << func(100,200) << endl;//20000
    //func.operator()(100)
    cout << func(100) << endl;//10000
    return 0;
}







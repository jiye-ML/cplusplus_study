#include <iostream>
using namespace std;

int main(void)
{
    int* pi = NULL;
    //int num = (int)pi;//C风格
    //int num = int(pi);//C++风格
    //int num = static_cast<int>(pi);//error
    
    void* pv = pi;
    pi = static_cast<int*>(pv);//合理,ok

    return 0;
}






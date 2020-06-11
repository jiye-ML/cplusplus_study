#include <iostream>
using namespace std;
int func(void){
    int num = 100;
    cout << "&num=" << &num << endl;
    return num;//int tmp = num;
}
int main(void)
{
    //int res = tmp;
    //int& res = func();//error
    const int& res = func();
    cout << res << endl;//100
    cout << "&res=" << &res << endl;
    return 0;
}



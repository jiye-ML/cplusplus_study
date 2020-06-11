#include <iostream>
//标准名字空间指令,以后可以省略"std::"
using namespace std;
namespace ns1{
    int num = 100;
    void func(void){
        cout << "ns1的func" << endl;
    }
}
namespace ns2{
    int num = 200;
    void func(void){
        cout << "ns2的func" << endl;
    }
}
//namespace{//无名名字空间
    int num = 300;
//}
int main(void)
{
    cout << num << endl;//300
    using ns1::num;//名字空间声明
    cout << num << endl;//100
    cout << ns2::num << endl;//200
    cout << ::num << endl;//300
    return 0;
}















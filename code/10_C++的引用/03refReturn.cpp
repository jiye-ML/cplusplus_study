#include <iostream>
using namespace std;
struct A{
    int data;
    int& func(void){
        return data;
    }
    int& func2(void){
        int num = 100;
        return num;//危险!
    }
};
int main(void)
{
    A a = {100};
    cout << a.data << endl;//100
    a.func() = 200;
    cout << a.data << endl;//200
    return 0;
}

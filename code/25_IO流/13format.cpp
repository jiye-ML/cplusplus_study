#include <iostream>
#include <iomanip>//流控制符
using namespace std;

int main(void)
{
    cout << 100/3.0 << endl;//33.3333
    cout << setprecision(10) << 100/3.0
        << endl;//33.33333333
    
    cout << '[';
    cout << setw(10) << setfill('-') <<
        showpos << internal << 12345;
    cout << ']' << endl;

    cout << '[';
    //设置域宽(8),十六进制,左对齐,显示进制标识
    cout << setw(8) << hex << left << showbase
        << 100;
    cout << ']' << endl;

    return 0;
}





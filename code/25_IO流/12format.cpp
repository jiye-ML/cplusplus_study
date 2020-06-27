#include <iostream>
using namespace std;

int main(void)
{
    cout << 100/3.0 << endl;
    cout.precision(10);
    cout << 100/3.0 << endl;
    cout << '[';
    cout.width(10);//设置域宽
    cout.fill('-');//空白位置用'-'填充
    cout.setf(ios::showpos);//显示正号
    cout.setf(ios::internal);//数据靠右,符号靠左
    cout << 12345;
    cout << ']' << endl;
    return 0;
}





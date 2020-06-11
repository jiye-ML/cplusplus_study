#include <iostream>
using namespace std;

int main(void)
{
    //int& r = 100;//error
    const int& r = 100;//ok
    cout << r << endl;//100

    int a=3,b=5;
    //a+b表达式的结果会保存到临时变量中,
    //临时变量是系统分配的,都是右值.
    //int& r2 = a+b;//error
    const int& r2 = a+b;
    cout << r2 << endl;//8

    char c = 'a';
    //首先要将字符c转换为int,转换结果保存到临
    //时变量,临时变量都是右值
    //int& r3 = c;//error
    //r3实际引用的就是隐式转换后的临时变量
    const int& r3 = c;
    cout << "&r3=" << &r3 << endl;
    cout << "&c=" << (void*)&c << endl;

    return 0;
}






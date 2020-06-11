#include <iostream>
using namespace std;

int main(void)
{
    int a=3,b=5;

    cout << (a = b) << endl;//5
    cout << a << endl;//5

    (a = b) = 10;//ok
    cout << a << endl;//10

    /*const*/ int& r1 = (a = b);
    cout << r1 << endl;//5
   
    cout << "&a=" << &a << endl;
    cout << "&r1=" << &r1 << endl;

    a = 0;
    cout << ++a << endl;//1
    cout << a << endl;//1

    ++a = 10;
    cout << a << endl;//10
    ++++++a;
    cout << a << endl;//13

    int& r2 = ++a;//ok
    cout << r2 << endl;//14

    a = 0;
    cout << a++ << endl;//0
    cout << a << endl;//1
    
    //a++ = 10;//error
    //a++++;//error

    //int& r3 = a++;//error
    const int& r3 = a++;
    cout << r3 << endl;//1
    cout << a << endl;//2

    return 0;

}





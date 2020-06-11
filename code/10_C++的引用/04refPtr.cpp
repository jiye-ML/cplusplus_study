#include <iostream>
using namespace std;
void func(int i){
    cout << "func(int)" << endl;
}
int main(void)
{
    int a = 10;
    int* p = &a;
    int** pp = &p;//二级指针
    cout << **pp << endl;//10

    int& r = a;
    //int&* pr = &r;//error
    int* pr = &r;//ok.仅是普通的指针

    int*& rp = p;//指针的引用
    cout << rp << endl;
    cout << p << endl;

    //int&& rr = r;//error
    int& rr = r;//ok,仅是普通的引用

    int i=10,j=20,k=30;
    int* parr[3]={&i,&j,&k};//指针数组
    cout << *parr[0] << endl;//10
    cout << *parr[1] << endl;//20
    cout << *parr[2] << endl;//30

    //int& rarr[3]={i,j,k};//error

    int arr[3] = {10,20,30};
    int (&rarr)[3] = arr;//数组引用
    cout << rarr[0] << endl;//10
    cout << rarr[1] << endl;//20
    cout << rarr[2] << endl;//30

    void (*pfunc)(int) = func;//函数指针
    pfunc(10);
    void (&rfunc)(int) = func;//函数引用
    rfunc(10); 

    return 0;
}







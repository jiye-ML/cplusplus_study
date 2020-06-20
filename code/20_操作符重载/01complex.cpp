#include <iostream>
using namespace std;
class Complex{
public:
    Complex(int r,int i):m_r(r),m_i(i){}
    void print(void)const{
        cout << m_r << '+' << m_i << 'i'
            << endl;
    }
    //成员函数形式:
    //c1+c2 ==> c1.operator+(c2)
    //三个const作用:
    //1)修饰返回值,禁止对表达式再赋值
    //2)常引用,支持常量型右操作数
    //3)常函数,支持常量型左操作数
    const Complex operator+(
            const Complex& c)const{
        Complex res(m_r+c.m_r,m_i+c.m_i);
        return res;
    }

    //友元函数
    friend const Complex operator-(
       const Complex& l,const Complex& r);

private:
    int m_r;//实部
    int m_i;//虚部
};
//-:全局函数形式
//c2-c1 ==> operator-(c2,c1)
const Complex operator-(
        const Complex& l,const Complex& r){
    Complex res(l.m_r-r.m_r , l.m_i-r.m_i);
    return res;
}

int main(void)
{
    const Complex c1(1,2);
    const Complex c2(3,4);
    c1.print();
    c2.print();

    //Complex c3 = c1.operator+(c2)
    Complex c3 = c1 + c2;
    c3.print();//4+6i

    //Complex c4 = operator-(c2,c1)
    Complex c4 = c2 - c1;
    c4.print();//2+2i

    return 0;
}








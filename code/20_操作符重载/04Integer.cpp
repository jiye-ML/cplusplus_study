#include <iostream>
using namespace std;
class Integer{
public:
    Integer(int i=0):m_i(i){}
    void print(void)const{
        cout << m_i << endl;
    }
    //前++:成员函数形式
    Integer& operator++(void){
        ++m_i;
        return *this;
    }
    //前--:全局函数形式
    friend Integer& operator--(Integer& i){
        --i.m_i;
        return i;
    }
    //后++:成员函数形式
    const Integer operator++(int){
        Integer old = *this;
        ++*this;//++m_i;
        return old;
    }
    //后--:全局函数形式
    friend const Integer operator--(
            Integer& i,int){
        Integer old = i;
        --i;//--i.m_i;
        return old;
    }
private:
    int m_i;
};
int main(void)
{
    Integer i(10);
    Integer j = ++i;//i.operator++()
    j.print();//11
    i.print();//11
    j = ++++i;
    i.print();//13
    j.print();//13

    j = --i;//operator--(i)
    j.print();//12
    i.print();//12

    j = ----i;
    j.print();//10
    i.print();//10

    j = i++;//i.operator++(0)
    j.print();//10
    i.print();//11
    //i++++;//error

    j = i--;//operator--(i,0)
    j.print();//11
    i.print();//10
    //i----;//error

    return 0;
}








#include <iostream>
using namespace std;
class Integer{
public:
    Integer(int i=0):m_i(i){}
    void print(void)const{
        cout << m_i << endl;
    }
    //-:成员函数形式
    const Integer operator-(void) const {
        Integer res(-m_i);
        return res;
    }
    //~:全局函数形式(自定义表示平方效果)
    friend const Integer operator~(
            const Integer& i){
        Integer res(i.m_i*i.m_i);
        return res;
    }
private:
    int m_i;
};
int main(void)
{
    Integer i(10);
    Integer j = -i;//i.operator-()
    j.print();//-10
    j = ~i;//operator~(i);
    j.print();//100

    return 0;
}








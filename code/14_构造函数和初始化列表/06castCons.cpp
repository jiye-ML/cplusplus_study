#include <iostream>
using namespace std;
class Integer{
public:
    Integer(void){
        cout << "Integer(void)" << endl;
        m_i = 0;
    }
    //类型转换构造函数
    /*explicit*/ Integer(int i){
        cout << "Integer(int)" << endl;
        m_i = i;
    }
    void print(void){
        cout << m_i << endl;
    }
private:
    int m_i;
};
int main(void)
{
    Integer i;
    i.print();//0
    //1)首相要将100隐式转换为Integer类型对象
    //2)在使用转换结果(临时对象)对i进行赋值
    i = 100;
    i.print();//100
    
    //上面隐式转换有时代码可读性差,推荐使用显
    //式转换.
    //i = (Integer)200;//C风格
    i = Integer(200);//C++风格
    i.print();//200

    return 0;
}













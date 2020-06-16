#include <iostream>
using namespace std;
class Integer{
public:
    Integer(int i=0){
        cout << "Integer(int=0)" << endl;
        //m_pi = new int;
        //*m_pi = i;
        m_pi = new int(i);
    }
    void print(void) const {
        cout << *m_pi << endl;
    }
    ~Integer(void){
        cout << "析构函数" << endl;
        delete m_pi;
    }
private:
    int* m_pi;
};
int main(void)
{
    if(1){
        Integer i(100);//栈对象
        i.print();//100
        cout << "test1" << endl;
        Integer* pi=new Integer(200);//堆对象
        pi->print();//200
        delete pi;//负责调用析构函数
        cout << "test3" << endl;
    }//"}"调用析构函数
    cout << "test2" << endl;
    return 0;
}










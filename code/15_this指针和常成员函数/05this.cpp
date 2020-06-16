#include <iostream>
using namespace std;
class Counter{
public:
    Counter(int count=0):m_count(count){}
    void print(void){
        cout << "计数值:" << m_count << endl;
    }
    Counter& add(void){
        ++m_count;
        //this指向调用对象
        //*this就是调用对象自身
        return *this;//返回自引用
    }
    void destroy(void){
        //...
        cout << "this:" << this << endl;
        delete this;
    }
private:
    int m_count;
};
int main(void)
{
    Counter c;
    c.add().add().add();
    c.print();//3

    Counter* pc = new Counter;
    pc->add();
    pc->print();
    //delete pc;
    cout << "pc:" << pc << endl;
    pc->destroy();
    
    return 0;
}










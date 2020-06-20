#include <iostream>
#include <cstdlib>
using namespace std;
class A{
public:
    A(void){
        cout << "A的构造" << endl;
    }
    ~A(void){
        cout << "A的析构" << endl;
    }
    static void* operator new(size_t size){
        cout << "A::new" << endl;
        void* pv = malloc(size);
        return pv;
    }
    static void operator delete(void* pv){
        cout << "A::delete" << endl;
        free(pv);
    }
};
int main(void)
{
    //1)A*pa=(A*)A::operator new(sizeof(A))
    //2)pa->构造函数
    A* pa = new A;

    //1)pa->析构函数
    //2)A::operator delete(pa)
    delete pa;

    return 0;
}









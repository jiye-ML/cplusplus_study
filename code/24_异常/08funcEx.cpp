#include <iostream>
using namespace std;
class FileError{};
class MemoryError{};
class Base{
public:
    virtual void func(void) 
        throw(FileError,MemoryError){}
    virtual ~Base(void) throw() {}
};
class Derived:public Base{
    public:
    void func(void)
        throw(FileError){}
    ~Derived(void) throw() {}
    //string m_str;
    //int m_i;
};

int main(void)
{
    return 0;
}





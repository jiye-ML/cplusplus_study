#include <iostream>
using namespace std;
class FileError:public exception{
public:
    const char* what(void) const throw() {
        cout << "文件错误处理" << endl;
        return "FileError";
    }
    ~FileError(void) throw() {}
};
class MemoryError:public exception{
public:
    const char* what(void) const throw(){
        cout << "内存错误处理" << endl;
        return "MemoryError";
    }
};
void func(void){    
    //throw FileError();
    //throw MemoryError();
    char *p = new char[0xffffffff];
}
int main(void)
{
    try{
        func();
    }
    catch(exception& ex){
        cout << ex.what() << endl;
        return -1;
    }
    return 0;
}






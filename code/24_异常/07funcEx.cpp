#include <iostream>
using namespace std;
class FileError{};
class MemoryError{};
//函数声明
void func(void)throw(MemoryError,FileError);
//函数定义
void func(void)throw(FileError,MemoryError){
    //throw FileError();
    throw MemoryError();
}
int main(void)
{
    try{
        func();
    }
    catch(FileError& ex){
        cout << "文件相关错误处理" << endl;
    }
    catch(MemoryError& ex){
        cout << "内存相关错误处理" << endl;
    } 
    return 0;
}





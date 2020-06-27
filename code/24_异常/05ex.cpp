#include <iostream>
#include <cstdio>
using namespace std;
class A{
public:
    A(void){ cout << "A的构造" << endl; }
    ~A(void){ cout << "A的析构" << endl; }
};
class FileError{
public:
    FileError(const string& file,int line)
        :m_file(file),m_line(line){
        cout << "错误位置:" << m_file << ','
            << m_line << endl;
    }
private:
    string m_file;
    int m_line;
};
int func3(void){
    A a;
    FILE *fp = fopen("xx.txt","r");
    if(fp==NULL){
        //throw -1;//抛出异常
        //预定义宏:
        //__FILE__:表示当前文件名
        //__LINE__:表示当前行号
        throw FileError(__FILE__,__LINE__);
    }
    cout << "func3正常执行" << endl;
    return 0;
}
int func2(void){
    A a;
    func3();
    cout << "func2正常执行" << endl;
    return 0;
}
int func1(void){
    A a;
    func2();
    cout << "func1正常执行" << endl;
    return 0;
}
int main(void)
{
    try{
        func1();
    }
    catch(int ex){
        if(ex == -1){
            cout << "文件打开失败!" << endl;
            return -1;
        }
    }
    catch(FileError& ex){
        cout << "File Open Error!" << endl;
        return -1;
    }
    cout << "main正常执行" << endl;
    return 0;
}













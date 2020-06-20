//单例模式:懒汉式
#include <iostream>
using namespace std;
class Singleton{
public:
    //3)使用静态成员函数获取单例对象
    static Singleton& getInstance(void){
        if(s_instance == NULL){
            s_instance = new Singleton(123);
        }
        ++s_count;//s_count = s_count + 1;
        return *s_instance;
    }
    void print(void) const {
        cout << m_data << endl;
    }
    //单例对象不用即可销毁,什么时候销毁?
    //应该最后一个使用者不用时再销毁!
    void release(void){
        if(--s_count == 0){
            delete s_instance;
            s_instance = NULL;
        }
    }
private:
    //1)私有化构造函数
    Singleton(int data):m_data(data){
        cout << "单例对象被创建了" << endl;
    }
    ~Singleton(void){
        cout << "单例对象被销毁了" << endl;
    }
    //将拷贝构造函数声明为私有
    Singleton(const Singleton&);
    //2)使用静态成员变量表示单例对象
    static Singleton* s_instance;
private:
    int m_data;
    //计数:记录单例对象使用者的个数
    static int s_count;
};
Singleton* Singleton::s_instance=NULL;
int Singleton::s_count = 0;

int main(void)
{
    cout << "main函数开始执行" << endl;
    //++s_count:1
    Singleton& s1 = Singleton::getInstance();
    //++s_count:2
    Singleton& s2 = Singleton::getInstance();
    //++s_count:3
    Singleton& s3 = Singleton::getInstance();

    cout << "&s1=" << &s1 << endl;
    cout << "&s2=" << &s2 << endl;
    cout << "&s3=" << &s3 << endl;

    s1.print();
    s1.release();//--s_count:2
    
    s2.print();
    s3.print();

    s2.release();//--s_count:1
    s3.release();//--s_count:0,delete

    return 0;
}









#include <iostream>
using namespace std;
class User{
public:
    /*User(int id,int passwd)
        :m_id(id),m_passwd(passwd){
        cout << "构造函数:" << this << endl;
    }*/
    //通过this区分形参变量和成员变量
    User(int m_id,int m_passwd){
        this->m_id = m_id;
        this->m_passwd = m_passwd;
    }
    void print(void){
        cout << m_id << "," <<m_passwd <<endl;
        cout << this->m_id << "," << 
            this->m_passwd << endl;
    }/*编译器编译以后类似如下:
    void print(User* this){
        cout << this->m_id << "," << 
            this->m_passwd << endl;
    }*/
private:
    int m_id;
    int m_passwd;
};
int main(void)
{
    User u1(1001,666666);
    cout << "&u1:" << &u1 << endl;
    User u2(1002,888888);
    cout << "&u2:" << &u2 << endl;
    u1.print();//User::print(&u1)
    u2.print();//User::print(&u2)

    return 0;
}










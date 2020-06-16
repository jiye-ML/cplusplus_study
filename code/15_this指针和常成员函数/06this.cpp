#include <iostream>
using namespace std;
class Student;//短视声明
class Teacher{
public:
    void educate(Student* s);
    void reply(const string& answer);
private:
    string m_answer;
};
class Student{
public:
    void ask(const string& question,
            Teacher* t);
};
void Teacher::educate(Student* s){
    s->ask("什么是this指针?",this);
    cout << "学生回答:" << m_answer << endl;
}
void Teacher::reply(const string& answer){
    m_answer = answer;
}
void Student::ask(const string& question,
        Teacher* t){
    cout << "问题:" << question << endl;
    t->reply("this指针指向调用对象的地址");
}
int main(void)
{
    Teacher teacher;
    Student student;
    teacher.educate(&student);
    return 0;
}






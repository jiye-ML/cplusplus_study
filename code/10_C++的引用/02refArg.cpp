#include <iostream>
using namespace std;
struct Teacher{
    char name[100];
    int age;
    double salary;
};
void print(const Teacher& t){
    cout << "我叫" << t.name << ",今年" <<  t.age/*++*/
          << "岁,工资是"<< t.salary << endl
          << endl;
}
int main(void)
{
    const Teacher teach = {"王建立",48,800.5};
    print(teach);
    print(teach);
    return 0;
}






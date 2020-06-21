#include <iostream>
using namespace std;

class Base{
public:
    int m_data;
};
//class Derived:public Base{};
class Derived:private Base{};
int main(void)
{
    Derived d;
    //Base* pb = static_cast<Base*>(&d);
    
    return 0;
}






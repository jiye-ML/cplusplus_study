#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
    int i = 1234;
    double d = 56.78;
    char c = 'T';
    char s[] = "HelloWorld!";
    /* char buf[100] = {0};
     * sprintf(buf,"%d %lf %c %s",i,d,c,s);
     * */
    ostringstream oss;
    oss << i << ' ' << d << ' ' << c << ' '
        << s;
    cout << oss.str() << endl;

    istringstream iss;
    iss.str("4321 87.65 H Hello");
    int i2;
    double d2;
    char c2;
    char s2[20]={0};
    /* char buf[] = "4321 87,65 H Hello"
     * sscanf(buf,"%d %lf %c %s",&i2,&d2,&c2,
     * s2);
     * */
    iss >> i2 >> d2 >> c2 >> s2;
    cout << i2 << ',' << d2 << ',' << c2 <<
        ',' << s2 << endl;

    return 0;
}









#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream ofs("file.txt"/*ios::out*/);
    ofs << 1234 << ' ' << 56.78 << ' ' <<
        "apples" << endl;
    ofs.close();

    ifstream ifs("file.txt"/*ios::in*/);
    int i;
    double d;
    string s;
    ifs >> i >> d >> s;
    cout << "从文件中读到数据:" << i << ',' 
        << d << ',' << s << endl;
    ifs.close();

    return 0;

}






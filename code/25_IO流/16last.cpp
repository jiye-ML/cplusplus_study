#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    ofstream ofs("last.txt");
    char wbuf[] = "C++语法课结束了!";
    ofs.write(wbuf,sizeof(wbuf));
    ofs.close();
    
    ifstream ifs("last.txt");
    char rbuf[100] = {0};
    ifs.read(rbuf,sizeof(rbuf));
    cout << "读到内容:" << rbuf << endl;
    ifs.close();
    
    return 0;
}





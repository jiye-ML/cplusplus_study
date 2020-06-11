#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    union{//匿名联合
        unsigned int ui;
        unsigned char uc[4];
    };
    ui = 0x12345678;
    printf("%#x\n",uc[0]);//0x78
    printf("%#x\n",uc[1]);//0x56
    printf("%#x\n",uc[2]);//0x34
    printf("%#x\n",uc[3]);//0x12

    return 0;
}




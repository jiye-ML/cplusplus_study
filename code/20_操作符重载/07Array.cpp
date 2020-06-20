#include <iostream>
using namespace std;
class Array{
public:
    Array(size_t size){
        m_arr = new int[size];
    }
    ~Array(void){
        delete[] m_arr;
    }
    //适用普通对象,返回左值
    int& operator[](size_t i){
        return m_arr[i];
    }
    //适用常对象,返回右值
    const int& operator[](size_t i)const{
        //return m_arr[i];
        return const_cast<Array&>(*this)[i];
    }
private:
    int* m_arr;
};
int main(void)
{
    Array arr(10);    
    for(int i=0;i<10;i++){
        arr[i] = i+1;
    }
    const Array& carr = arr;
    for(int i=0;i<10;i++){
        cout << carr[i] << ' ';
    }
    cout << endl;
    arr[0] = 11;//ok
    //carr[0] = 11;//应该error

    return 0;
}






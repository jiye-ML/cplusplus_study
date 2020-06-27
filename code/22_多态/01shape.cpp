#include <iostream>
using namespace std;
//图形基类,抽象类,纯抽象类
class Shape{
public:
    Shape(int x=0,int y=0):m_x(x),m_y(y){}
    virtual void draw(void)=0;//纯虚函数
protected:
    int m_x;//坐标
    int m_y;
};
//圆形子类
class Circle:public Shape{
public:
    Circle(int x,int y,int r)
        :Shape(x,y),m_r(r){}
    void draw(void){//自动变成虚函数
        cout << "绘制圆形:" << m_x << "," <<
            m_y << "," << m_r << endl;
    }
private:
    int m_r;
};
//矩形子类
class Rect:public Shape{
public:
    Rect(int x,int y,int w,int h)
        :Shape(x,y),m_w(w),m_h(h){}
    void draw(void){//自动变成虚函数
        cout << "绘制矩形:" << m_x << ',' << 
            m_y << ',' << m_w << ',' << m_h
            << endl;
    }
private:
    int m_w;
    int m_h;
};
void render(Shape* buf[]){
    /* 正常通过指针调用函数,根据指针的类型;
     * 但如果通过指针调用虚函数,根据实际指向
     * 目标对象类型----多态
     * */
    for(int i=0;buf[i]!=NULL;i++)
        buf[i]->draw();
}
//如果子类没有覆盖基类的纯虚函数,那么它就
//也是抽象类
class Triangle:public Shape{};
int main(void)
{
    Shape* buf[1024] = {NULL};
    buf[0] = new Rect(1,2,3,4);
    buf[1] = new Circle(5,6,7);
    buf[2] = new Circle(11,12,71);
    buf[3] = new Rect(8,16,7,8);
    buf[4] = new Circle(6,9,10);
    render(buf);

    //Shape s;//抽象类不能创建对象
    //Triangle t;

    return 0;
}










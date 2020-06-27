#include <iostream>
using namespace std;
class PDFParser{
public:
    void parse(const char* pdffile){
        cout << "解析出一个矩形" << endl;
        onRect();
        cout << "解析出一个圆形" << endl;
        onCircle();
        cout << "解析出一行文本" << endl;
        onText();
    }
private:
    virtual void onRect(void) = 0;
    virtual void onCircle(void) = 0;
    virtual void onText(void) = 0;
};
class PDFRender:public PDFParser{
private:
    void onRect(void){
        cout << "绘制一个矩形" << endl;
    }
    void onCircle(void){
        cout << "绘制一个圆形" << endl;
    }
    void onText(void){
        cout << "显示一行文本" << endl;
    }
};
int main(void)
{
    PDFRender render;
    render.parse("xx.pdf");
    return 0;
}






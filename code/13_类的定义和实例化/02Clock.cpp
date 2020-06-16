#include <iostream>
#include <cstdio>
#include <ctime>
#include <Windows.h>

using namespace std;

class Clock {
public:
    Clock(time_t t) {
      tm *local = localtime(&t);
      m_hour = local->tm_hour;
      m_min = local->tm_min;
      m_sec = local->tm_sec;
    }

    void run(void) {
      while (1) {
        printf("\r%02d:%02d:%02d", m_hour, m_min, m_sec);
        fflush(stdout);//刷新输出缓冲区
        if (60 == ++m_sec) {
          m_sec = 0;
          if (60 == ++m_min) {
            m_min = 0;
            if (24 == ++m_hour)
              m_hour = 0;
          }
        }
        sleep(1);
      }
    }

private:
    int m_hour;
    int m_min;
    int m_sec;
};

int main(void) {
//  Clock clock(time(NULL));
//  clock.run();
  return 0;
}












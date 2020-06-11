#include <iostream>

namespace ns1 {
    void func() {
      std::cout << "ns1的func" << std::endl;
    }
}
namespace ns2 {
    void func() {
      std::cout << "ns2的func" << std::endl;
    }
}

namespace ns3 {
    void func() {
      std::cout << "ns3的func" << std::endl;
    }
}

int main() {
  //func();//名字空间里面成员不能直接访问
  ns1::func();
  ns2::func();
  ns3::func();
  return 0;
}













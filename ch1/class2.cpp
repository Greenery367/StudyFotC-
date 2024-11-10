#include <iostream>

namespace NameSpace1 {int a = 10;}
namespace NameSpace2 {int a = 20;}
int a = 30;
namespace NameSpace1 {int b = 50;}
int main(){
    int a = 40;

    std::cout<<NameSpace1::a<<std::endl; // NameSpace1의 a 출력(10)
    std::cout<<NameSpace2::a<<std::endl; // NameSpace2의 a 출력(20)
    std::cout<<::a<<std::endl; // a 출력(30)
    std::cout<<a<<std::endl;
    std::cout<<NameSpace1::b<<std::endl; // NameSpace1의 b 출력(50)
    return 0;
}
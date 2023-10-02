#include "SingleTemplatedList.cpp"
#include <string>

int main()
{
    List<std::string> a1;
    std::string str1 = "qwe";
    a1.pushBack(str1);
    List<std::string> a2;
    a2 = a1;
    std::cout << (a1 == a2) << std::endl;
    std::cout << a2 << std::endl;
    std::cout << "all good!" << std::endl; 
    return 0;
}
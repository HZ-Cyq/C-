#include <string>
#include <iostream>
//两个字符串的值交换 
int main() 
{
    std::string a = "AAA";
    std::string b = "BBB";
 
    std::cout << "before swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
 
    a.swap(b);
 
    std::cout << "after swap" << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
}

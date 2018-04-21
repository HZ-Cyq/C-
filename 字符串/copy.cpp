//#include <string>
#include <iostream>
#include <cstdio> 
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;
//将string拷贝给char*
int main()
{
    std::string foo("quuuux");
    char bar[7]; 
    printf("%d\n",(int)sizeof bar);  
    foo.copy(bar, sizeof bar);
    bar[6] = '\0';
    std::cout << bar << '\n';
}

/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 17时04分43秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
std::string &test_str() {
    std::string str_re = "test";
    return str_re;
}
class A {
public :
    friend int operator=(const A &a, const A &b) {
        return 5;
    }
}
int main() {
    return 0;
}

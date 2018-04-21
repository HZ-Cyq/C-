/*************************************************************************
	> File Name: c_str.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月29日 星期四 15时59分18秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
using std::string;
int main() {
    string str1("hello world!");
    printf("%s",str1.data());
    printf("%s",str1.c_str());
    /*cout << str1;
    const char *str2;
    str2 = str1.c_str();
    printf("%s",str2);
    const char *str3 = str1.data();
    printf("%s",str3);*/

    return 0;
}

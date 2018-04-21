/*************************************************************************
	> File Name: strcpy.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月27日 星期二 18时52分55秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
using std::cout;
using std::cin;
using std::endl;
int main() {
    char a[100];
    char b[] = "Hello World";
    strcpy(a,b);
    printf("a: %s\n",a);
    printf("a;%p, b:%p\n",a,b);
    return 0;
}

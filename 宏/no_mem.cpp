/*************************************************************************
	> File Name: no_mem.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月14日 星期六 20时33分37秒
 ************************************************************************/
/*在不开辟内存的情况下，获得一个类中每一个成员大小的宏*/
#include<iostream>
#include<stdio.h>
using namespace std;
#define offset(T,a) printf("%lu\n",(char *)&(((T *)(NULL))->a) - (char *)(NULL))
class Test {
public:    
    int a;
    int b;
    double c;
    double d;
    double e;
};
int main() {
    offset(Test,a);
    offset(Test,b);
    offset(Test,c);
    offset(Test,d);
    offset(Test,e);
    return 0;
}

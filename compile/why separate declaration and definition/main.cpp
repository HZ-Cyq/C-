/*************************************************************************
	> File Name: main.cpp
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 六 10/31 14:55:47 2020
 ************************************************************************/

#include<iostream>
#include "inlinetest.H"
#include "inlinederived.H"

int main(int argc, char *argv[]) {
    Itest obj1(2,3);
    Iderive obj2(1,2,3);
    obj1.a();
    obj2.b();

    obj2.a();
    obj2.b();
    obj2.c();

    return 0;
}

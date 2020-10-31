/*************************************************************************
	> File Name: inlinederived.cpp
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 六 10/31 14:53:44 2020
 ************************************************************************/
#include "inlinederived.H"

Iderive::Iderive(int a, int b, int c):Itest(a, b),c_(c){}
int Iderive::c() {
    cout << "c=" << c_ << endl;
    return c_;
}


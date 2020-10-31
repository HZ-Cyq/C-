/*************************************************************************
	> File Name: inlinederived.H
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 六 10/31 14:44:34 2020
 ************************************************************************/
#ifndef _INLINEDERIVED_H
#define _INLINEDERIVED_H

#include <iostream>
#include "inlinetest.H"
using namespace std;
class Iderive: public Itest //派生类
{
    public:
	int c_;
	int c();//非内联成员函数
	Iderive(int a, int b, int c);
};
#endif

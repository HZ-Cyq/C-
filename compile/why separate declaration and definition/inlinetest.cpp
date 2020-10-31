/*************************************************************************
	> File Name: inlinetest.cpp
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 六 10/31 13:43:23 2020
 ************************************************************************/
#include "inlinetest.H"

Itest::Itest(int a, int b):a_(a),b_(b)
{
}
int Itest::b()//非内联函数的定义
{
    cout << "b=" << b_ << endl;
    return b_;
}

/*************************************************************************
	> File Name: inlinetest.H
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 六 10/31 13:40:27 2020
 ************************************************************************/

#ifndef _INLINETEST_H
#define _INLINETEST_H

#include <iostream>
using namespace std;

class Itest 
{
    public:
	Itest(int a, int b); 
	int a_, b_; 
	inline int a(); 
	int b(); //非内联成员函数
};
inline int Itest::a() //内联函数的定义
{
    cout << "a=" << a_ << endl;
    return a_;
}
#endif

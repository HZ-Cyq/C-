/*************************************************************************
	> File Name: reference.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月29日 星期四 14时13分11秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int a = 3;
    int &refVal = a;
    printf("%d\n",refVal);
    printf("%p %p\n",&a,&refVal);
    refVal = 2;
    printf("%d\n",a);
    int &refVal1 = refVal;
    printf("%d %p\n",refVal1,&refVal1);
    return 0;
}

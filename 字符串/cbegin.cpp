/*************************************************************************
	> File Name: cbegin.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月29日 星期四 16时45分58秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
using namespace std;
using std::string;
using vector::cbegin;
using vector::cend;
int main() {
    string str1("hello");
    cout << *cbegin(str1)  << endl;
    return 0;
}

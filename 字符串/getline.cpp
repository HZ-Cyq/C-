/*************************************************************************
	> File Name: getline.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月29日 星期四 16时12分34秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
    string str;
    vector<string> v1;
    while(getline(cin,str)) {
        v1.push_back(str);
    }
    for(const auto& p : v1) {
        cout << p << endl;
    }
    cin.clear();
    vector<string> v2;
    while (getline(cin,str,' ')) {
        v2.push_back(str);
    }
    for(const auto&p : v2) {
        cout << p << endl;
    }
    return 0;
}

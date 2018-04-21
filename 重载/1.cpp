/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月12日 星期四 13时57分58秒
 ************************************************************************/
//重载函数
#include<iostream>
using namespace std;
class printData {
public:
    void print(int i) {
        cout << "打印整形：" << i << endl;
    }
    void print(double f) {
        cout << "打印浮点型：" << f << endl;
    }
    void print(char ch) {
        cout << "打印字符：" << ch << endl;
    }
    
};
int main() {
    printData pri;
    pri.print(1);
    pri.print(3.21);
    pri.print('s');
    return 0;
}

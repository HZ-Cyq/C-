/*************************************************************************
	> File Name: rvo.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月30日 星期五 20时04分22秒
 ************************************************************************/
//去掉返回值优化的编译 -fno-elide-constructors
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class people {
public:
    people(string name) {
        this->__name = name;
        cout << "default constructor" << endl;
    }
    people(const people &a) {
        cout << "copy constructor" << endl;
        this->__name = a.__name;
    }
    people() {}
private:
    string __name;
};
people func() {
    people temp_a("hug");
    people temp_b = temp_a;
    return temp_b;
}
int main() {
    people a = func();    
    return 0;
}

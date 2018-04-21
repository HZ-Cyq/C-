/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 08时54分55秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
using std::cout;
using std::endl;
class people {
public:
    static int number;
    int height;
    void say_hello() {
        say_private();
        cout << "hello!" << endl;
    }
private:
    int year;
    void say_private() {
        cout << "private" << endl;
    }
};
int people::number = 10;
int main() {
    people pe;
    pe.height = 1;
    printf("%d\n",pe.number);
    pe.say_hello();
//    pe.say_private();
//    pe.year = 2;
    return 0;
}

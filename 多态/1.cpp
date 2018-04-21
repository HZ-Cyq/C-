/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月10日 星期二 18时24分02秒
 ************************************************************************/
//这个不是多态,而只是一种不同命名空间的相同名字的函数方法
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Animal {
public:
    Animal(const string &name) : __name(name) {}
    void run() {
        cout << "I am animal, I am run" << endl;
    }
protected:
    string __name;
};
class Cat : public Animal {
public: 
    Cat() : Animal("cat") {};
    void run() {
        cout << "I can run with four legs" << endl;
    }
};
int main() {
    Cat a;
    Animal &b = a; //b只知道自己是一个Animal对象的引用
    Animal *c = &a; //c只知道自己是一个Animal对象的指针 
    a.run();
    b.run(); //这里调用的是Animal的run方法
    c->run(); //这里调用的也是Animal的run方法
    return 0;
}

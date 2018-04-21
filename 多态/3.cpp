/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月10日 星期二 18时24分02秒
 ************************************************************************/
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//不同的子类调用同样的方法，会有不同的执行方法
class Animal {
public:
    Animal(const string &name) : __name(name) {}
    virtual void run() = 0; // 纯虚函数, 派生类必须重新实现,用此来声明接口类, Animal类也成为了抽象类 , 抽象类不能生成对象
    virtual ~Animal() {}; // 有虚函数的方法要有虚函数的析构
protected:
    string __name;
};

class Cat : public Animal {
public: 
    Cat() : Animal("cat") {};
    void run() override {
        cout << "I can run with four legs" << endl;
    }
};

class People : public Animal {
public: 
    People() : Animal("people") {};
    void run() override {
        cout << "I can run with two legs" << endl;
    }
};

int main() {
    Cat b;
    People a,c;
    Animal *d[3] = {&a,&b,&c};
    for(int i = 0 ;i < 3; i++) {
        d[i]->run();
    }
    return 0;
}

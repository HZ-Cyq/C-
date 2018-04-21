/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: 2018年04月10日 星期二 18时24分02秒
 ************************************************************************/
//纯虚函数
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
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
    Cat() : Animal("cat") {}
    void run() override {
        cout << "I can run with four legs" << endl;
    }
};
int main() {
    Cat a;
    Animal &b = a;
    Animal *c = &a;
    a.run();
    b.run(); //因为run是虚函数,所以这里调用的是Animal的run方法
    c->run(); //这里调用的也是Animal的run方法
    return 0;
}

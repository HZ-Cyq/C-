/*************************************************************************
	> File Name: inherit.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 13时24分34秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
using std::string;

class Animal {
public:
    Animal(string name) : __name(name){}
    string name() {return this->__name;}
    string color;
protected :    
    string __name;
};

class Cat: public Animal {
public:
    Cat(): Animal("temp cat") {}
    Cat(string name): Animal(name) {}
    void set_name(string n) {
        this->__name = n;
    }
    void show_name() {
        cout << this->__name;
    }
};

int main() {
    Cat cat;
    cat.show_name();
    
    return 0;
}

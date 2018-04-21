/*************************************************************************
	> File Name: copy_construct.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 13时59分17秒
 ************************************************************************/

#include<iostream>
#include<string>
using std::string;
class Animal {
public:
    Animal(string name): __name(name) {}
    Animal(Animal &an): __name(an.__name) {} 
protected:
    string __name;
};
class Cat : public Animal {
public:    
    Cat(string name,) : 
    Cat(cat &c): Animal(a), __t(c.__t){}
private:
    int __t;
};
int main() {
    Cat cat("carfie");
    return 0;
}

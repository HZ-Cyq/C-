/*************************************************************************
	> File Name: succeed1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 15时42分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::cout;
usingg std::cout;
class Animal {
    Animal(string name) name(name){}
protected:
    string name;
};
class Bat : public Animal {
public:
    Bat(int black) : Animal("cute_bat"),black(black) {}
    int black;  
}
template<typename T>
class Array {
public:
    Array() {
        this->data = new T[n];
    }
private:
    T *data, temp;
    int n;
}
int main() {


    return 0;
}

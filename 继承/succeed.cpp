/*************************************************************************
	> File Name: succeed.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 14时35分55秒
 ************************************************************************/
//结构体和类默认权限
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
using std::string;
class Animal {
public:
    Animal(string name): name(name){}
    string get_name() {return this->name;}
protected:    
    string name;
};

class Bat : public Animal {
public: 
    Bat(): Animal("bat-1"){}
    void set_name(string name) {
        this->name = name;
    }
private:
    int year;
};
template<typename T>
class Array {
public :
    Array(int n): n(n) {
        this->data = new T[n];
    }
    T &operator[](int ind) {
        if(ind < 0 || ind >= this->n)  return this->temp;
        return this->data[ind];
    }
    void output() {
        for(int i = 0; i < this->n; i++) {
            cout << this->data[i] << endl;
        }
    }
    //普通构造
    Array<T> &operator=(Array<T> &a) {
        delete[] this->data;
        this->n = a.n;
        this->data = new T[this->n]; //不能用memcpy,会有大bug
        for(int i = 0; i < n; i++) {
            this->data[i] = a.data[i];
        }
        return *this;
    }
   
    ~Array() {
        this->n = 0;
        delete[] this->data;  //加方括号的话 代表delete一个数组
    }
private :
    int n;
    T *data,temp;
};
    
ostream &operator<<(ostream &out,Bat &a) {
    out << "bat: " << a.get_name();
    return out;
}
int main() {
//    Array<int> arr(10);
//    arr.output();
    Array<Bat> arr1(10);
    arr1.output();
    Array<Bat> arr2(10);
    arr2 = arr1;
    return 0;
}

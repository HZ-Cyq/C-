/*************************************************************************
	> File Name: this.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 17时25分46秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A {
public:
    A() {
        this->x = 5, this->y = 6;
    }
    virtual void say() const {
       // this->say2(); say2()方法(非const成员方法)不能被const成员方法调用
        cout << this->x << this->y << endl; //但是可以调用非const变量
        cout << "hello A" << endl;
        say2();
    }
     void say2() const {
        cout << "say2 from A" << endl;
    }
private:
    mutable int x, y;
};
class B : public A {
public:
   /*virtual void say() const {
        this->z = 4;
        this->w = 5;
        cout << "hello B" << endl;
    }*/
    void say2() {
        cout << sizeof(*this) << endl;
        cout << "say2 from B" << endl;
    }
private:
    mutable int z,w;    
};
int main() {
//    cout << sizeof(B) << endl << sizeof(A) << endl; //就算把B中的say方法给删除，B的大小还是24
    B b;
    b.say();
//    const A a;
//    a.say();
    return 0;
}

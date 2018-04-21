/*************************************************************************
	> File Name: copy1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 10时45分22秒
 ************************************************************************/
//拷贝构造函数与赋值构造函数还有new
#include<iostream>
#include<cstdio>
using namespace std;
using std::cout;
using std::endl;

class point {
public:
    point() {
        cout << "wucan" << endl;
    }
    point(int x,int y): x(x), y(y) {
        cout << "point 直接初始化point"<< endl;
    }
    point(const point &p): x(p.x), y(p.y) { //!这里必须是point的引用，如果不是的话，在p1给p赋值时会调用赋值构造，然后一直递归，陷入死循环 
        cout << "point copy construct" << endl;
    }
    void set_point() {
        this->x = 0;
        this->y = 0;
        return ;
    }
    int x;
    int y;
};

class Test {
public: 
    Test(const point &p1,const point &p2): p1(p1), p2(p2) {
        cout << "Test 直接初始化" << endl;
    }
    //拷贝构造
    Test(const Test &t) :p1(t.p1),p2(t.p2) { //这里对p1的构造是point拷贝构造函数
        cout << "Test copy construct" << endl;
    }
    //赋值构造
    Test &operator=(const Test &t) {
        this->p1 = t.p1; //调用的是point的赋值构造函数(point有一个默认的赋值构造函数)
        this->p2 =  t.p2;
        cout << "Test design construct" << endl;
        return *this;
    }
    point p1;
    point p2;
};

ostream &operator<<(ostream &out,point &p) {
    out << "("<< p.x << ", " << p.y  << ")"<< endl;
    return out;
}

int main() {
    point *p5 = new point[3]; //调用的是point无参构造函数
    cout << p5[0];
    
    point p1(1,2), p2(3,4);   
    point p3(5,6), p4(7,8); 
    Test t1(p1,p2);
    Test t2(p3,p4);
    
    Test t3 = t2; //调用Test拷贝构造函数
    cout << t3.p1 << t3.p2 ;
    t3 = t1; //调用Test赋值构造函数
    cout << t3.p1 << t3.p2 ;
    return 0;
}

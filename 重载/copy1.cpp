/*************************************************************************
	> File Name: copy1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月12日 星期四 15时45分16秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Point {
public:
    Point(int _x,int _y) : x(_x), y(_y) {}
    Point(const Point &p) : x(p.x), y(p.y){}
    int x;
    int y;
    void show() {
        cout << "(" << x << ","<< y << ")" << endl;
    }
}; 

class Test {
public:    
    Test(const Point &p1,const Point &p2) :p1(p1),p2(p2) {}
    Test(const Test &t1): p1(t1.p1),p2(t1.p2) {}
    Point p1;
    Point p2;
};
ostream &operator<<(ostream &out, Point &a) {
    out << "(" << a.x << ", " << a.y << ")" << endl;
    return out;
}
int main() { 
    Point p1(2,3);
    Point p2(4,5);
    Test a(p1,p2);
    cout << a.p1 << a.p2;
    Test b(a);
    cout << b.p1 << b.p2;
    return 0;
}

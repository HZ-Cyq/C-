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
//    static int number;
    void show() {
        cout << "(" << x << ","<< y << ")" << endl;
    }
}; 

class Test {
public:    
    Test(int x, int y) :p(x,y),x(x),y(y) {}
    Point p; 
    int x, y;
};
ostream &operator<<(ostream &out, Point &a) {
    out << "(" << a.x << ", " << a.y << ")" << endl;
    return out;
}
int main() { 
    Test b(2,3);
    cout << b.p;
    cout << sizeof(Point) << ","<< sizeof(Test) << endl;
    return 0;
}

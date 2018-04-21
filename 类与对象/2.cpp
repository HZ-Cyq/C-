/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 09时17分31秒
 ************************************************************************/
//class 默认访问权限是private, struct的默认访问权限是public
//声明与定义
//类的大小 虚函数会影响类的大小
//类名是一类特殊的命名空间
#include<iostream>

#include<string>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::string;
/*class  People {
    string name;
};*/
struct Point {
//    Point(int x,int y) : x(x), y(y){}
    Point(int x,int y): x(x), y(y){}
    Point(Point &a) : x(a.x), y(a.y){}
    int x,y;
};

struct Test {
    Test(int x,int y) : p1(x,y),p2(p1){} 
    Point p1; 
    Point p2;
    static int num;
};
int Test::num = 0;
ostream &operator<<(ostream &out,Point &a) {
    out << "(" << a.x << "," << a.y << ")" << endl;
    return out;
}

int main() {
    Test a(2,3);
    cout << a.p2;
    cout << sizeof(Test) << " " << sizeof(Point) << endl;
    return 0;
}

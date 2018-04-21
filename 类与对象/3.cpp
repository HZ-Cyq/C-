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
//aotu作用在编译阶段 模板也是作用在编译阶段
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
    Point(const Point &a) : x(a.x), y(a.y){}
    int x,y;
};

struct Test {
    Test(int x,int y) : p1(x,y),p2(p1){
        Test::num++;
    }
    Test(const Test &a): p1(a.p1),p2(a.p2) {
        Test:num ++;
    }
    static void count() {
        cout << "All Test Object : " << Test::num << endl; 
    }
    ~Test() {
        Test::num--;
    }
    Point p1; 
    Point p2;
private:
    static int num;
};
int Test::
Test func() {
    Test temp(5,6);
    Test::count();
    return temp;
}
/*auto不能用在参数定义中 模板可以用在参数类型推导阶段 但是无法用在返回值类型推导阶段
void test1(auto x) {
    cout << x << endl;
}
*/
ostream &operator<<(ostream &out,Point &a) {
    out << "(" << a.x << "," << a.y << ")" << endl;
    return out;
}

int main() {
    Test a(2,3),b(1,2);
    Test::count();
    Test c = func();
    Test::count();
//    cout << << << endl;
//   cout << a.p2;
//    cout << sizeof(Test) << " " << sizeof(Point) << endl;
    return 0;
}

/*************************************************************************
	> File Name: 2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月12日 星期四 14时26分35秒
 ************************************************************************/
//重载赋值运算符
#include<iostream>
using namespace std;
class Distance {
public:
    Distance(int _feet,int _inches): feet(_feet), inches(_inches) {}
    Distance operator=(Distance d) {
        this->feet = d.feet;
        this->inches = d.inches;
        return *this;
    }
    void show() {
        cout << "feet: "<< this->feet << ", inches: "<< this->inches << endl;
    }
    void set_feet(int _feet) {
        this->feet = _feet;
    }
private:
    int feet;
    int inches;
};
int main() {
    Distance d1(10,2);
    Distance d2 = d1;
    d2.set_feet(100);
    d2.show();
    d1.show();
    return 0;
}

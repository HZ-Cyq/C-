/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月30日 星期五 18时58分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
using std::cout;
using std::endl;
/*class People {
public:
    void set_year(int new_year) {
        year = new_year;
        return ;
    }
    int get_year() {
        return year;
    }
private:
    int year;
};*/
void swap(int &a,int &b) {
    int temp = a;
    a = b, b = temp;
}
int main() {
    int a = 1;
    int b = 2;
    swap(a,b);
    cout << a << " " << b << endl;
    return 0;
}

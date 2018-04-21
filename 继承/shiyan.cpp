/*************************************************************************
	> File Name: shiyan.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月31日 星期六 13时22分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Animal {
public:
    int size;
protected:
    int year;
private:
    int color;
}; 
class Cat : Animal{
        
};
int main() {
    Cat cat;
    cat.size = 1;
    cout << cat.size << endl;
    return 0;
}

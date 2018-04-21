/*************************************************************************
	> File Name: any_array1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月24日 星期六 16时19分50秒
 ************************************************************************/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

template<typename T>
struct array {
public: 
    array(int n)  : n(n) {
        this->data = new T[n];
    }
    T &operator[] (int ind) {
        if(ind >= this->n) {
            cout << "index error" << ind << "/" << n << endl;
            return this->nil;
        }
        return this->data[ind];
    }
private:
    T *data,nil;
    int n;
};

int main() {
    array<int> a(10);
    for(int i = 0;i < 10; i++) {
        a[i] = i;
    }
    for(int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
//    cout << a[1000] << endl;
    return 0;
}

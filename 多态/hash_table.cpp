/*************************************************************************
	> File Name: hash_table.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 14时24分44秒
 ************************************************************************/
//整型 aphash 
#include<iostream>
#include<string.h>
using namespace std;
#include "hash_table.h"

class MyHash1 : public HashFunc {  //对字符串进行哈希
public:  
    int operator()(const void *value) override {
       // const char *str = (const char *) (value);
        const char *str = static_cast<const char *> (value);
        int hash_code = 0, seed = 131;
        cout << "Myfunc1 " << endl;
        while(*str) {
            hash_code = hash_code * seed + str[0];
            str++;
        }
        return hash_code & 0x7fffffff;
    }
};
int MyHash2(const void *value) {
        const char *str = (const char *) (value);
        int hash_code = 0, seed = 132;
        cout << "Myfunc2" << endl;
        while(*str) {
            hash_code = hash_code * seed + str[0];
            str++;
        }
        return hash_code & 0x7fffffff;
    
}

int main() {
    MyHash1 func1;
    HashTable h1(func1);
    HashTable h2(MyHash2);
    cout << h1.get_hash("hello") << endl;
    cout << h2.get_hash("hello") << endl;
    return 0;
}

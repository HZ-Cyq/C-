/*************************************************************************
	> File Name: hash_table.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 15时51分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include "hash_table.h"
class HashFunc1 : public HashFunc {
public:
    int operator()(const void *value) override {
        const char *str = (const char *)(value);
        int hash_code = 0;
        cout << "hash func:" << endl;
        while(*str) {
            hash_code += *str;
            cout << "" << endl;
            cout << *str << endl;
            str++;
        }
        return hash_code;
    }
};
class HashFunc2 : public HashFunc {
public:
    int operator()(const void *value) override {
        const char *str = (const char *)(value);
        int hash_code = 0;
        cout << "hash func:" << endl;
        while(*str) {
            hash_code += *str + 1;
            cout << "" << endl;
            cout << *str << endl;
            str++;
        }
        return hash_code;
    }
};
int main() {
    HashFunc1 hashfunc1; 
    HashTable hashtable(hashfunc1);
    cout << hashtable.get_hash("a") << endl;
    return 0;
}

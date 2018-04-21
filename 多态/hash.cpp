/*************************************************************************
	> File Name: hash.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年04月10日 星期二 20时39分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

class HashFunc {
public:
    virtual int operator()(const void *data) const {
        const char *str = static_cast<const char *>(data);
        int hash = 0;
        for(int i = 0; str[i]; i++) {
            hash = (hash << 5) ^ str[i] ^ (hash >> 3);
        }
        return (hash & 0x7fffffff);
    }
    virtual int operator()(int data) const {
        return data;
    }
};

class HashTable {
public:
    HashTable(const HashFunc &func) : __func(&func) {}
    int get_hash(const void *data) {
        return (*(this->__func))(data);
    }
    int get_hash(int data) {
        return (*(this->__func))(data);
    }
private:
    const HashFunc *__func;
};

class my_HashFunc : public HashFunc {
public :
    int operator()(const void *data) const override {
        const char *str = static_cast<const char *>(data);        
        int hash = 0;
        for(int i = 0; str[i]; i++) {
            hash = (hash << 7) ^ str[i] ^ (hash >> 5);
        }    
        return (hash & 0x7fffffff);
    }
};

class my_HashFunc2 : public HashFunc {
public :
    int operator()(int data) const override {
        return data >> 1;
    }
};
int main() {
    HashFunc hf;
    HashTable ht(hf);
    my_HashFunc hf2;
    HashTable ht2(hf2);
    my_HashFunc2 hf3;
    HashTable ht3(hf3);
    cout << ht.get_hash("haizei") << endl;
    cout << ht2.get_hash("haizei") << endl;
    cout << ht3.get_hash(18) << endl;
    return 0;
}

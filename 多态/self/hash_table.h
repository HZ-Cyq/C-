/*************************************************************************
	> File Name: hash_table.h
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 15时45分18秒
 ************************************************************************/

#ifndef _HASH_TABLE_H
#define _HASH_TABLE_H
typedef int(*HashFuncPtr)(const void *value);
class HashFunc {
public:
    virtual int operator()(const void *value) = 0;
    virtual ~HashFunc() {}
};

class HashTable {
public:
    HashTable(HashFunc &hash): __hashfunc(&hash), __hashfunc_ptr(NULL) {}
    HashTable(HashFuncPtr ptr): __hashfunc(NULL), __hashfunc_ptr(ptr) {}
    int get_hash(const void *value) {
        if(__hashfunc == NULL) {
            return (*(this->__hashfunc_ptr))(value);
        } else {
            return (*(this->__hashfunc))(value);
        }
    }
private:
    HashFunc *__hashfunc;
    HashFuncPtr __hashfunc_ptr;
};
#endif

/*************************************************************************
	> File Name: hash_table.h
	> Author: 
	> Mail: 
	> Created Time: 2018年04月13日 星期五 14时25分36秒
 ************************************************************************/
//设计哈希函数的基类
#ifndef _HASH_TABLE_H
#define _HASH_TABLE_H
typedef int (*HashFuncRaw) (const void *value); 
class HashFunc {
public:    
    virtual int operator()(const void *value)  = 0;
    virtual ~HashFunc() {}
};


class HashTable {
public :    
    HashTable(HashFunc &hc) : __hc(&hc), __hcr(nullptr) {} //传引用值 对象
    HashTable(HashFuncRaw hc) : __hcr(hc), __hc(nullptr) {} //传指针
    int get_hash(const void *data) {
        if(this->__hc) {
            return (*(this->__hc))(data); //改成函数对象 将圆括号设计成函数对象
        } else {
            return this->__hcr(data);
        }
    }
private : 
    HashFunc *__hc;
    HashFuncRaw __hcr;
};
#endif

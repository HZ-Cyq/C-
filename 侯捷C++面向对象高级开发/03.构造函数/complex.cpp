/*  > name: complex.cpp
	> Author: cyq 
	> Mail: 1369509439@qq.com 
	> Created Time: 三 11/ 4 22:18:49 2020
 ************************************************************************/
 //1、inline:函数若在class body内定义完成，便自动成为inline候选人
 /*
  * 2、构造函数：
  * 构造函数要与类名称一致，
  *     默认实参【创建的时候没有指明，用默认实参】
  *     没有返回值类型
  *     构造函数特有的语法：initialization list, 初始列
  *     
  *     构造函数可以有很多个 overloading(重载)
  * 析构函数：
  *     不带指针的类多半不用写析构函数
  * comple c1(2,1);
  * complex c2;
  * complex *p = new complex(4);
  */
class complex {
    public:
    complex (double r = 0, double i = 0) : re(r), im(i){}
    complex& operator += (const complex&);
    double real () const {return re;}
    double imag() const {return im;}

    private:
    double re, im;

    friend complex& __doapl (complex* , const complex &);

};

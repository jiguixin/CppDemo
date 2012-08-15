#include "CppDemoTest.h"

#include <iostream>

using namespace std;

//指针与引用的区别
void PointCompareRefence()
{
	int ival = 1024, ival2 = 2048;

	int *pi=&ival, *pi2 = &ival2;

	pi = pi2;

	cout <<"-----指针-----"<<endl;
	cout << " ival " << ival<<endl;
	cout << " ival2 " << ival2 <<endl; 
	cout<<"*pi "<<*pi<<endl;
	cout<<"*pi2 "<<*pi2<<endl;
	cout <<"-----引用-----"<<endl;
	int &ri= ival, &ri2 = ival2;
	ri = ri2;
	cout << " ival " << ival<<endl;
	cout << " ival2 " << ival2 <<endl; 
	cout<<"&ri "<<ri<<endl;
	cout<<"&ri2 "<<ri2<<endl;

}

//指针的指针
void PointToPoint()
{
	int ival = 1024;

	int *pi = &ival;

	int **pi2 = &pi;

	cout << "ival:"<<ival<<"\n"
		<<"间接值："<<*pi<<"\n"
		<<"双向指针间接值:"<<**pi2<<endl;
}

//new 和delete 的操作
void NewAndDelete()
{
	int i = 1024;
	int *pi = &i;

	int *ni= new int;
	 
	//delete pi;  //测试会出现卡死在这。不能删除不是new创建的对象
	 
	delete ni; //成功

}
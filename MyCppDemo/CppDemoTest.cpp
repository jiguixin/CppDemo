#include "CppDemoTest.h"

#include <iostream>

using namespace std;

//ָ�������õ�����
void PointCompareRefence()
{
	int ival = 1024, ival2 = 2048;

	int *pi=&ival, *pi2 = &ival2;

	pi = pi2;

	cout <<"-----ָ��-----"<<endl;
	cout << " ival " << ival<<endl;
	cout << " ival2 " << ival2 <<endl; 
	cout<<"*pi "<<*pi<<endl;
	cout<<"*pi2 "<<*pi2<<endl;
	cout <<"-----����-----"<<endl;
	int &ri= ival, &ri2 = ival2;
	ri = ri2;
	cout << " ival " << ival<<endl;
	cout << " ival2 " << ival2 <<endl; 
	cout<<"&ri "<<ri<<endl;
	cout<<"&ri2 "<<ri2<<endl;

}

//ָ���ָ��
void PointToPoint()
{
	int ival = 1024;

	int *pi = &ival;

	int **pi2 = &pi;

	cout << "ival:"<<ival<<"\n"
		<<"���ֵ��"<<*pi<<"\n"
		<<"˫��ָ����ֵ:"<<**pi2<<endl;
}

//new ��delete �Ĳ���
void NewAndDelete()
{
	int i = 1024;
	int *pi = &i;

	int *ni= new int;
	 
	//delete pi;  //���Ի���ֿ������⡣����ɾ������new�����Ķ���
	 
	delete ni; //�ɹ�

}
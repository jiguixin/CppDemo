#include <iostream>

using namespace std;

int main()
{ 

	int x,y;

	cout << "������X��";
	cin >> x;
	cout << endl;

	cout << "������Y��";
	cin >> y;
	cout << endl;

	int low,upper;

	if (x >= y)
	{
		upper = x;
		low = y;
	}
	else
	{
		low = x;
		upper = y;
	}

	for (int i = low; i <= upper; i++)
	{
		if ( i % 10 == 0)
			cout <<endl;
		cout << i << " ";
	}
	

	//for

	/*int total = 10;

	while (total >= 0)
	{
		cout << total;
		--total;
		cout<<endl;
	}

	for (int i = 10; i >= 0; i--)
	{
		cout << i;
		cout<<endl;
	}*/


	/*int sum = 0;;
	for (int i= 50; i <=100;i++)
	{
		sum += i;
	}

	cout<< "���ս��Ϊ:"<<sum<<endl;


	sum =0;
	int i = 50;
	while (i <=100)
	{
		sum += i;
		i++;
	}
	cout<< "���ս��Ϊ:"<<sum<<endl;*/

	//------------------add
	//int i,j;
	//cout << " ������i:";
	//cout << endl;
	// 
	//cout << "/*";
	//cout << "*/"; 

	///* sdfs */

	//cin >> i;
	//cout << "������j:";
	//cin >> j;

	//int result = i*j;

	//cout << "���ս��Ϊ:" << result;

	//cout << "Hello Jim";
	//cin >> i;
}
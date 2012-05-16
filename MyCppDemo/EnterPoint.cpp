#include <iostream>
#include <vector>
#include "Sales_item.h"
#include <cctype>

using namespace std;
using std::vector;

class Address
{
public:
		//

private:
	string country;
	string city;
	string street;
	string number;
};
int main()
{  
	vector<string> words;
	string word;
	while (cin>>word)
		words.push_back(word);

	for(vector<string>::iterator iter= words.begin();iter != words.end();++iter)
	{
		cout << *iter;
	}

/*
	//习题3.14
	vector<string> words;
	string word;
	while (cin>>word)
		words.push_back(word);

	for (vector<string>::size_type idx =0; idx < words.size(); idx++)
	{
		for (string::size_type strIdx =0;strIdx < words[idx].length();strIdx++)
		{
			if (islower(words[idx][strIdx]))
			{
				words[idx][strIdx] = toupper(words[idx][strIdx]);
			}
		}

		cout << words[idx] << "  ";
		if (idx % 8 == 0)
		{
			cout << endl;
		}
		 
	}*/

	/*
	//对vector 操作 习题3.13

	vector<int> intArr;
	 
	int inputData;
	while(cin >> inputData)
	{
		intArr.push_back(inputData);
	}

	if (intArr.size() %2 != 0)
		cout << "输入个数为奇数，不能参见最后一次运算"<<endl;

	for (vector<int>::size_type idx = 0; idx != intArr.size();idx++)
	{
		vector<int>::size_type nextIdx = idx +1;
		if (nextIdx >= intArr.size())
		{ 
			break;
		}
			
	    int result =intArr[idx]+intArr[nextIdx];

		cout << intArr[idx] <<"+" << intArr[nextIdx] << "="<< result<<endl; 

		vector<int>::size_type lastIdx = intArr.size() -1-idx;

		if ( idx > lastIdx)
			break;
		int flResult = intArr[idx]+intArr[lastIdx];
		cout << intArr[idx] << "+" << intArr[lastIdx] << "="<<flResult<<endl;
		 
	}

	string k;
    cin>>k;
	cout <<k;

	
	*/



/* // & 引用与const引用
	int ival = 123;

	int &refival = ival;
	refival = 2;
	cout << "ival:"<<ival << " &refival: "<<refival<<endl;

	const int &refConst = ival;

	ival = 222;

	cout << "refConst: " << refConst << endl;
*/

	/*string name = "asdfsadfsadf";
	string stuName("jim test");

	string num(10,'9');

	cout << name << endl;
	cout << stuName << endl;
	cout << num << endl;
*/
/*
	int ds,zs;
	cout << "请输入底数:";
	cin>>ds;
	cout << "请输入支数：";
	cin >> zs;

	int result=1;

	for (int i = 0; i < zs;i++)
	{
		result *= ds;
	}
	
	cout << result;
*/
/*
	  string i = "A" "abb " "df";

	cout << i << endl;

	cout << "select stu,stuName,stuAge \
			stuClass from student \
			order by id desc \
		";

	cout << "who goes with F\145rgus?\012";
		
	cout <<"2M\n";
	cout <<"2M" <<"\n";
	cout << "2 \n M \n";
*/
/*
	Sales_item total,trans;

	if (cin >>total)
	{
		while (cin >> trans)
		{
			if (total.same_isbn(trans))
			{
				total = total + trans;
			}
			else
			{
				cout << total << endl;
				total = trans;
			}
		}

		cout << total << endl;
	}
	else
	{
		cout << "No data" << endl;
		return -1;
	}
 */


	

	/*
	Sales_item book;
	cin>>book;
	cout << book << endl;*/
	 
	/*
	int x,y;

	cout << "请输入X：";
	cin >> x;
	cout << endl;

	cout << "请输入Y：";
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
	}*/
	

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

	cout<< "最终结果为:"<<sum<<endl;


	sum =0;
	int i = 50;
	while (i <=100)
	{
		sum += i;
		i++;
	}
	cout<< "最终结果为:"<<sum<<endl;*/

	//------------------add
	//int i,j;
	//cout << " 请输入i:";
	//cout << endl;
	// 
	//cout << "/*";
	//cout << "*/"; 

	///* sdfs */

	//cin >> i;
	//cout << "请输入j:";
	//cin >> j;

	//int result = i*j;

	//cout << "最终结果为:" << result;

	//cout << "Hello Jim";
	//cin >> i;
	return 0;
}

//#3 整数的个数
#include <iostream>

using namespace std;

int main()
{
	int a[100]={0};

	int n=0;
	int num=0;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>num;
		a[num]++;
	}

	cout<<a[1]<<endl;
	cout<<a[5]<<endl;
	cout<<a[10]<<endl;

	return 0;
}

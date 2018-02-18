//#4 1的个数
#include <iostream>
using namespace std;
int main()
{
	int n;
	int num;
	int sum=0;
	
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>num;
		while (num!=0)
		{
			if (num%2==1)
				sum++;
			num/=2;
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}

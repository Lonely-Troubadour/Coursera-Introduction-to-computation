//#2 奇数求和
#include <iostream>

using namespace std;

int main()
{
	int m=0,n=0;
	int sum=0;

	cin>>m>>n;

	for (int i = m; i <= n; ++i)
	{
		if (i%2==1)
		{
			sum+=i;
		}
	}

	cout<<sum;

	return 0;
}

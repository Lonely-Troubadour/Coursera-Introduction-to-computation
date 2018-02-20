#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[3];
	cin>>n;
	for (int i = 0; i < 3; ++i)
	{
		a[i]=n%10;
		n/=10;
	}

	for (int i = 2; i >=0; --i)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

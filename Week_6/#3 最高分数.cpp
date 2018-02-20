#include <iostream>
using namespace std;
int main()
{
	int n,max;
	int grades[100];
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>grades[i];
	}
	max=grades[0];
	for (int i = 0; i < n; ++i)
	{
		if (grades[i]>max)
		{
			max=grades[i];
		}
	}
	cout<<max;
	return 0;
}

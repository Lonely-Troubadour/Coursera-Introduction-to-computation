#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[6];
	for (int i = 0; i < 6; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 1; j < 6-i; ++j)
		{
			bool left=(a[j-1]%2==1);
			bool right=(a[j]%2==0);
			if ((!left && !right)||(left==!right && a[j]>a[j-1]))
			{
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<fabs(a[0]-a[5]);
	return 0;
}

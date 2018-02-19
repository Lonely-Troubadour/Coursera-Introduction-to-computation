//#1 细菌实验分组
#include <iostream>
using namespace std;
int main()
{
	int n,A=0,B=0;
	int id[100]={0};
	double rate[100]={0.0};
	double before,after;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>id[i];
		cin>>before>>after;
		rate[i]=after/before;
		if (rate[i]>100)
			A++;
		else
			B++;		
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j < n-i; ++j)
		{
			if (rate[j]<rate[j-1])
			{
				double temp;
				temp=rate[j];
				rate[j]=rate[j-1];
				rate[j-1]=temp;
				temp=id[j];
				id[j]=id[j-1];
				id[j-1]=temp;
			}
		}
	}
	
	cout<<A<<endl;
	for (int i = 0; i < n; ++i)
	{
		if (rate[i]>100)
		{
			cout<<id[i]<<endl;
		}
	}
	cout<<B<<endl;
	for (int i = 0; i < n; ++i)
	{
		if (rate[i]<=100)
		{
			cout<<id[i]<<endl;
		}
	}
	return 0;
}

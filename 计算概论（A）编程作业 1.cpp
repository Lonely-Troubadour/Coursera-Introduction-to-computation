//计算概论（A）编程作业 1

#include <iostream>

using namespace std;
int main ()
{
	int all[10];
	int even[10], odd[10];
	int evenNum=0,oddNum=0;
	int temp=0;
	for (int i = 0; i < 10; ++i)
	{
		cin>>all[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		if (all[i]%2==0)
		{
			even[evenNum]=all[i];
			evenNum++;
		}
		else
		{	
			odd[oddNum]=all[i];
			oddNum++;
		}
	}

	for (int i = 0; i < evenNum; ++i)
	{
		for (int j = i+1; j < evenNum; ++j)
		{
			if (even[i]<even[j])
			{
				temp=even[i];
				even[i]=even[j];
				even[j]=temp;
			}
		}
	}

	for (int i = 0; i < oddNum; ++i)
	{
		for (int j = i+1; j < oddNum; ++j)
		{
			if (odd[i]<odd[j])
			{
				temp=odd[i];
				odd[i]=odd[j];
				odd[j]=temp;
			}
		}
	}

	for (int i = 0; i < evenNum; ++i)
	{
		cout<<even[i]<<"\t";
	}
	cout<<endl;
	for (int i = 0; i < oddNum; ++i)
	{
		cout<<odd[i]<<"\t";
	}
	return 0;
}
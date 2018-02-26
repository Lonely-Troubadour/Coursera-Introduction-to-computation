//结果会输出所有位置，方法错误。错误在哪：未知。暂时标记，留待检查。
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[300];
	int count=0;
	int n,m;
	cin>>n>>m;
	while (n!=0 && m!=0)
	{
		for (int i = 0; i < n; ++i)
		{
			a[i]=1;
		}

		int pos=m-1;

		while (count < n)
		{
			while (a[pos]!=0)
				pos++;
			a[pos]=0;
			if (pos<n-m-1)
				pos+=m;
			else
				pos=fabs(m-pos)-1;
			count++;
		}
		for (int i = 0; i < n; ++i)
		{
			if (a[i]==1)
			{
				cout<<i<<endl;
			}
		}
		cin>>n>>m;
	}
		return 0;
}

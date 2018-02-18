//#5 数组逆序重放
#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int sPos=0,ePos;

	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	ePos=(n-1);

	while (ePos>sPos)
	{
		int temp;
		temp=a[ePos];
		a[ePos]=a[sPos];
		a[sPos]=temp;
		sPos++;
		ePos--;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<' ';
	}

	return 0;
}

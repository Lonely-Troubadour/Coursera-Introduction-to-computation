#include <iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int appleEatten;
	if (y%x==0)
		appleEatten=y/x;
	else
		appleEatten=y/x+1;
	if (appleEatten>n)
		cout<<0;
	else
		cout<<n-appleEatten;
	return 0;
}

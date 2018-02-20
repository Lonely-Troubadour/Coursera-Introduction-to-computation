#include <iostream>
using namespace std;
int main()
{
	int h,r;
	const double pi=3.14159;
	double V;
	cin>>h>>r;
	V=pi*r*r*h;
	int n=20000/V;
	cout<<n+1;
	return 0;
}

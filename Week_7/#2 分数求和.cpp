//#2 分数求和
//I can't find out where is wrong, help!
#include <iostream>
using namespace std;
int main()
{
    int p=0,q=1;
    int n;
    int a[10],b[10];
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        scanf ("%d/%d",&a[i],&b[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        q*=b[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        p+=a[i]*q/b[i];
    }
    
    //find the greatest common divisor
    int d,tempp=p,tempq=q;
    while (tempp!=0) {
        d=tempp;tempp=tempq%tempp;tempq=d;
    }
    p/=tempq;q/=tempq;
    
    if (q>1)
        cout<<p<<'/'<<q<<endl;
    else
        cout<<p<<endl;
    return 0;
}

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
			if (rate[j]>rate[j-1])
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
	
	
	// 记录最大的差
  double maxDiff = 0;
  // 和最大差的下标
  int maxDiffIndex = 0;
  for (int i = 0; i < n - 1; i++) {
    double diff = rate[i] - rate[i + 1];
    if (maxDiff < diff) {
      maxDiff = diff;
      maxDiffIndex = i;
    }  
  }
  
  //输出繁殖率较大的那组细菌
  cout << maxDiffIndex + 1 << endl;
  for (int i = maxDiffIndex; i >= 0; i--) {
    cout << id[i] << endl;
  }

  //输出繁殖率较小的那组细菌
  cout << n - maxDiffIndex - 1 << endl;
  for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
    cout << id[i] << endl;
  }
return 0;	
}

# There are still some problems of the sorting problem

关于同时进行奇偶分类和冒泡排序的算法还是有不明白的

要花时间琢磨一下。

我的代码：
```
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
  ```
  
  之前标答的：
  

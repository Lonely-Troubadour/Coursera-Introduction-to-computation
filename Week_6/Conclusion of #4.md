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
  ```
  // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
      for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 10 - i; j++) {      
      // 与刚才的冒泡排序不同，我们不只是通过较数字的大小决定顺序
      // 如果左边的为偶数，右边的为奇数，那么顺序也需要颠倒
      bool leftIsEven = a[j - 1] % 2 == 0;
      bool rightIsEven = a[j] % 2 == 0;
      if ((leftIsEven && !rightIsEven) ||
          (leftIsEven == rightIsEven && a[j - 1] > a[j])) {        
        int temp = a[j];        
        a[j] = a[j - 1];
        a[j - 1] = temp;
      }
    }
  }  
  ```
  

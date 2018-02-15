# 关于冒泡排序答案的评论
```
// 首先，我们把奇数放到数组左边，偶数放到数组右边  
      int l = 0, r = 9; //用左手和右手分别指向数组两端. 
      while (l <= r) {  
        bool leftIsOdd = a[l] % 2 == 1;  
        bool rightIsEven = a[r] % 2 == 0;  
        if (leftIsOdd) { 
          l++;  
        } else if (rightIsEven) { 
          r--;  
        } else if (!leftIsOdd && !rightIsEven) { 
          int temp = a[l]; 
          a[l] = a[r]; 
          a[r] = temp; 
        } 
      } 
```

非常非常巧妙，运用了 `bool` , 正块代码将数组分为了左右两份，左边是奇数，右边是偶数。

我的方法是另外创建了两个数组，分别来存放奇数和偶数。

与之比较，显然标答里的方法更为高级，尤其是这种分类的方法，我好似见过，又好似没有见过。

这是值得记住的一种方法，在此mark一下。

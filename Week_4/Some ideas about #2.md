# 关于冒泡排序答案的评论
>// 首先，我们把奇数放到数组左边，偶数放到数组右边  
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

# Conment about #1
原题提示：
```
亚种内部，细菌繁殖能力差异远远小于亚种之间细菌繁殖能力的差异。

也就是说，亚种间任何两组细菌的繁殖率之差都比亚种内部两组细菌的繁殖率之差大。

```
也就是说不能用简单的100来分类，标答中的找出分界点的方法很好，值得学习。
```
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
  ```

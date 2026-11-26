# factorial5739

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-26T20:14:31.880Z  

```cpp
class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        
        
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;    
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/factorial5739/1)
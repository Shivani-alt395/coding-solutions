# taking-input

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T17:52:05.044Z  

```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    int n;
    float f;
    int ff; // To Store floor of float variable f

    // code here
    //cin>>s;
    
    
    getline(cin,s);
    
    cin>>n;
    cin>>f;
    
    ff=int(f);
    

    cout << s << endl;
    cout << n << endl;
    cout << ff << endl;
    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/taking-input/1)
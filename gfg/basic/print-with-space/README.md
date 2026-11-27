# Print With Space

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two strings **a**  and  **b**, print them on the same line with a single space between them. Print a newline after the output.

 **Examples:** 

```
Input: a = "Hello", b = "World"
Output: Hello World
Explanation: a and b are printed in a single line and a space separates them.
```

```
Input: a = "Geeks", b = "for"
Output: Geeks for
Explanation: a and b are printed in a single line and a space separates them.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T14:07:52.378Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // code here
    cout<<a<<' '<<b<<endl;

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/print-with-space/1)
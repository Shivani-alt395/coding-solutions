# Print With Separator

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two strings  **s1**  and  **s2**, and a separator symbol separator, print s1 and s2 with separator between them, followed by a new line.

 **Examples :** 

```
Input: s1 = "Hello", s2 = "World", separator = "@"
Output: Hello@World
Explanation: s1 and s2 are printed with the @ symbol in between.
```

```
Input: s1 = "Geeks", s2 = "For", separator = "-"
Output: Geeks-For
Explanation: s1 and s2 are printed with the - symbol in between.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T14:22:28.304Z  

```cpp
#include <iostream>

using namespace std;

int main() {

    string s1, s2, separator;
    cin >> s1 >> s2 >> separator;

    // code here
    cout<<s1<<separator<<s2<<endl;

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/print-with-separator/1)
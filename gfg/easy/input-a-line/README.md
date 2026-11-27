# Input Line

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an input string  **s**  that may contain multiple words separated by spaces, read the entire line of input and print it as it is.

 **Examples :** 

```
Input: s = "hello world"
Output: hello world
Explanation: The entire string "hello world" containing multiple words separated by a space is read and printed as it is.
```

```
Input: s = "Welcome to GeeksForGeeks"
Output: Welcome to GeeksForGeeks
Explanation: The full line contains words separated by single spaces. The complete line is read without truncating at spaces and printed.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T18:01:49.582Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    // code here
    getline(cin,s);
    
    cout << s << "\n";
    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/input-a-line/1)
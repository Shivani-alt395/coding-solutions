# Input Boolean Value

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Take a boolean value  **a**  as an input. The program should display its numeric representation:

- 1 for "true"
- 0 for "false"

 **Examples:**  

```
Input: a = true
Output: 1
```

```
Input: a = false
Output: 0
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T18:16:27.236Z  

```cpp
#include <iostream>
using namespace std;

int main() {
    bool a;

    // code here
    cin>>boolalpha>>a;
    // Printing numeric representation of boolean
    cout << noboolalpha<<a;

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/input-boolean-value/1)
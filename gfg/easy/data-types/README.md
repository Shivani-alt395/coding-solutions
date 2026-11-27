# Data Types

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a program template, declare four variables named  **a**,  **b**,  **c**, and  **d** with the data types int, float, double, and long long respectively inside the required scope.

 **Example:** 

```
Input: None
Output: verified
Explanation: All 4 variables are declared with proper data type.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T19:09:13.279Z  

```cpp
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    
    // Code here to declare the variables
    int a;
    float b;
    double c;
    long long d;

    // Variables declaration checking (Please do not change)
    if ((typeid(a) == typeid(int)) and (typeid(b) == typeid(float)) and
        (typeid(c) == typeid(double)) and (typeid(d) == typeid(long long)))
        cout << "verified\n";

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/data-types/1)
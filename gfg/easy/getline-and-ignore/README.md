# Get Line and Ignore

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Taking input of a string containing multiple words requires reading the entire line. When an integer input using cin is followed by a line input using getline(), the newline character \n left in the input buffer causes getline() to read an empty line. This issue is resolved using cin.ignore().

Read three inputs in the following order:

- A multi-word string a.
- An integer b.
- Another multi-word string c.

Print the variables in the exact same order as they are received.

 **Examples:** 

```
Input:
hello world
5
hello geeks
Output:
hello world
5
hello geeks
Explanation:
First, the multi-word string "hello world" is read.
Next, the integer 5 is read.
After reading 5, the leftover newline character in the input buffer is discarded using cin.ignore().
Finally, the string "hello geeks" is read completely without being skipped.
```

```
Input:
Geeks For Geeks
101
Learn to code
Output:
Geeks For Geeks
101
Learn to code
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T18:41:35.004Z  

```cpp
#include <iostream>
using namespace std;

int main() {
    string a, c;
    int b;

    // code here
    getline(cin,a);
    
    cin >> b;
    
    cin.ignore();
    getline(cin,c);
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/getline-and-ignore/1)
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
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
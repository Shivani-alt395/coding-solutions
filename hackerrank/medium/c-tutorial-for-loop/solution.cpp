#include <iostream>
#include <cstdio>
#include <array>
using namespace std;

int main() {
    // Complete the code.
    
    int a,b;
    cin>>a>>b;
    array<string,9> arr ={"one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<< arr[i-1]<<"\n";
        }
        else{
            if(i%2==0){
                cout<<"even"<<"\n";
            }
            else{
                cout<<"odd"<<"\n";
            }
        }
    }
return 0;
}

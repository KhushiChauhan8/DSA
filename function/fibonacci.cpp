#include<iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;
    int nextNumber = 0;

    cout<<a<<" "<<b;

    for(int i = 0; i < n; i++ ){
        nextNumber = a + b;

        cout<<" "<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return nextNumber;
}

int main() {
   
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = fib(n);

    cout<<endl;

    cout<<"The fibonacci series is = "<<ans<<endl;

    return 0;

    
}
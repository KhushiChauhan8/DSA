#include<iostream>
using namespace std;

//1 -> prime no
//0 -> not a prime
bool isPrime(int n){

    // it's divide, not a prime numbner
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            return 0;
        }
        return 1;
    }
}

int main() {
    int n;
    cout<<"Enter a value of n: ";
    cin>>n;

    if(isPrime(n)){
        cout<<"is a prime Number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}
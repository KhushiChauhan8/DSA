#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){
    int nume = factorial(n);

    int dunom = factorial(r) * factorial(n - r);
    
    return nume/dunom;
}

int main(){
    int n, r;
    cin>>n>>r;

    cout<<"Answer is "<<nCr(n, r)<<endl;
}
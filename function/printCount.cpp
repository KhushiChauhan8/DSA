#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i = 1; i <= n; i++){
       cout<<i<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    printCounting(n);

    return 0;
}
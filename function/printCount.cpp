#include<iostream>
using namespace std;

//function signature void, int
void printCounting(int n){

    //function body
    for(int i = 1; i <= n; i++){
       cout<<i<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //function call
    printCounting(n);

    return 0;
}
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    int i = 1;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        cout<<i<<endl;
        i++;  
        
    }

 
    cout<<"sum is :"<<sum <<endl;


}
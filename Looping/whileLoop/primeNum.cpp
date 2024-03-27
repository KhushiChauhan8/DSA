#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i == 0){
         cout<<"not prime"<<i<<endl;
        }
        else{
            cout<<"prime"<<i<<endl;
        }
        cout<<i<<endl;
        i++;
    }
    // cout<<"the velue of sum is :"<<sum<<" ";

}
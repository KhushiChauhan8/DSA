#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number";
    cin>>n;

    int i = 1;
    while(i <= n){

        //print first triangle
        int j = 1;
        while(j <= n - i + 1){
            cout<<j <<" ";
            j++;
        }

        //print second triangle
        int start = i -1;
        while(start){
            cout<<"*"<<" ";
            start--;
        }

        //print third triangle
        int start2 = i -1;
        while(start2){
            cout<<"*"<<" ";
            start2--;
        }

        //print fourth triangle
        int j2 = n - i + 1;
        while(j2){
            cout<<j2<<" ";
            j2--;
        }
        cout<<endl;
        i++;
    }
}
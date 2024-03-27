#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int i = 1;
    while(i<=n){
        //space print kar lo
        int space = i - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //star print kar lo
        int j = 1;
        while(j<=n-i+1){
            cout<<i + j - 1;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}

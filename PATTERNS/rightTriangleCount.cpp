#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n){
        //space print kar lo
        int space = n - i;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //star print kar lo
        int j = 1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

}

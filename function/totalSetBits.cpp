#include<iostream>
using namespace std;

int setBitsB(int b){

    int count = 0;

    while(b != 0){
       if(b&1){
         count++;
       }
        b = b>>1;
    }
    return count;
   
}

int setBitsA(int a){
    
    int count = 0;

    while(a != 0){
        if(a&1){
          count++;
        }
        a = a>>1;
    }
    return count;
}





int main() {
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    int ans1 = setBitsA(a);
    int ans2 = setBitsB(b);

    cout<<"set Bits of a A = "<<ans1<<endl;
    cout<<"set Bits of a B = "<<ans2<<endl;

    int ans = ans1 + ans2;
    cout<<"tatal number of Set Bits is = "<<ans<<endl;

}
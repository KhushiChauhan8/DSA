#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = 0;
    int i = 0; 
    while(n != 0){
        int digit = n % 10;
       
        if(digit == 1){
           ans = (digit * pow(2, i)) + ans;
        }
        n = n/10;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
}
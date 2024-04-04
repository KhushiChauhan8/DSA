#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = 0;
    int i = 0;
    if(n < 0){
        //if number is negative
        n = n * (-1);
        while(n != 0){
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        //find 2's complement of the number
        //1's complement

        int newAns = (~ans);
        //2's complement
        newAns = newAns + 1;
        cout<<newAns<<endl;
    }

    else{
        //if number is positive
        while(n != 0){
            int bit = n & 1;
            ans = (bit * pow(10, i)) + ans;
            n = n >> 1;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


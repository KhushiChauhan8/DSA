#include<iostream>
// #include<math.h>
using namespace std;

int square(int n){
    // int res = pow(n, 2);

    int res = n * n;

    return res;
}



int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int result = square(n);

    cout<<"The square of this given number is = "<<result<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int Ap(int n){
    int ans = 3 * n + 7;

    return ans;
}  

int main() {
    int n;
    cout<<"Enter te value of n: ";
    cin>>n;

    int answer = Ap(n);

    cout<<"Answer is = "<<answer<<endl;

    return 0;
}  
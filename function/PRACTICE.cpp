#include <iostream>
using namespace std;

// QS -> 1'st

// void update(int a){
//     a = a / 2;
// }

// int main() {
//     int a = 10;
//     update(a);

//     cout<< a << endl;
// }

// QS -> 2'nd

// int  update(int a){
//     a -= 5;
//     return a;
// }

// int main() {
//     int a = 15;
//     update(a);

//     cout<< a << endl;
// }

// QS -> 3'rd

// int  update(int a){
//     int ans = a * a;
//     return ans;
// }

// int main() {
//     int a = 14;
//     a = update(a);

//     cout<< a << endl;
// }

// QS ==> 1

// int AtoThePowerB(int a, int b){
//     int ans = 1;
//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }

// int main() {
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;

//     int answer = AtoThePowerB(a, b);

//     cout<<"the answer is "<<answer<<endl;
// }

// QS ==> 2

// even = 1;
// odd = 0;
//  bool IsEven(int nums){
//      if(nums&1){
//          return 0;
//      }
//      return 1;
//  }

// int main(){
//     int nums;
//     cin>>nums;

//     if(IsEven(nums)){
//         cout<<"Number is Even"<<endl;
//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }
// }

// QS ==> 3

// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//        fact = fact * i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int nume = factorial(n);
//     int duneme = factorial(r) * factorial(n - r);
//     return nume/duneme;
// }

// int main() {
//     int n, r;
//     cin>>n>>r;

//     cout<<"the nCr is "<<nCr(n, r)<<endl;

// }

// QS ==> 4

// bool IsPrime(int n){
//     for(int i = 2; i <= n; i++){
//         if(n % i == 0){
//             return 0;
//         }
//         return 1;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     if(IsPrime(n)){
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Not Prime"<<endl;
//     }

//     return 0;
// }

// QS ==> 5

// int setBitB(int b)
// {
//     int count = 0;

//     while (b != 0)
//     {

//         if (b & 1)
//         {
//             count++;
//         }

//         b = b >> 1;
//     }

//     return count;
// }

// int setBitA(int a)
// {
//     int count = 0;
//     while (a != 0)
//     {

//         if (a & 1)
//         {
//             count++;
//         }

//         a = a >> 1;
//     }
//     return count;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans1 = setBitA(a);
//     int ans2 = setBitB(b);

//     cout << "set Bit a and b is " << ans1 << " " << ans2 << endl;

//     int answer = ans1 + ans2;
//     cout << "the total numbers of set bits are " << answer << endl;

//     return 0;
// }

// QS ==> 6

int fib(int n){
    int a = 0;
    int b = 1;
    int nextNumber = 0;

    cout<<a<<" "<<b;

    for(int i = 0; i < n; i++ ){
        nextNumber = a + b;

        cout<<" "<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return nextNumber;
}

int main() {
   
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = fib(n);

    cout<<endl;

    cout<<"The fibonacci series is = "<<ans<<endl;

    return 0;

    
}
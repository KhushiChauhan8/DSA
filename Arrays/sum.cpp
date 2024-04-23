#include<iostream>
using namespace std;

int sum(int arr[], int n){
  int sum = 0;
    for(int i = 0; i < n; i++){
     sum += arr[i];
    }

  return sum;
}



int main() {
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    int arr[5];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of all the elements in the given array is "<<sum(arr, size)<<endl;

    return 0;
}
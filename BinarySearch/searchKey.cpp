#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        
        //go to right part
        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 9, 10};
    int odd[5] = {23, 56, 45, 21, 89};

    int evenIndex = binarySearch(even, 6, 6);

    cout<<"the index of 9 is "<<evenIndex<<endl; 

    int oddIndex = binarySearch(odd, 5, 89);

    cout<<"the index of 89 is "<<oddIndex<<endl;

    return 0;
}
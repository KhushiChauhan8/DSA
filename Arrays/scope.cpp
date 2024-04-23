#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<< endl << "Inside the function" <<endl;
    
    //updating array's first element
    arr[0] = 120;

    //printting the array
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"going back to the main function";
}


int main() {
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    //printting the array
    cout<< endl << "Printting in main functon " <<endl;
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
#include<iostream>
using namespace std;
int main() {
 //Qs => 1
    // for(int i = 0; i < 5; i++){ //Output - 0, 2, 4
    //     cout<< i << " ";
    //     i++;
    // }

    //Qs => 2
    // for(int i = 0; i <= 5; i--){  //IOutput - nfinite loop
    //     cout<< i << " ";
    //     i++;
    // }

    //Qs => 3
    // for(int i = 0; i <= 15; i += 2){  //Output - 0, 3, 5, 7, 11, 13, 15
    //     cout<< i << " ";

    //     if( i&1 ){
    //         continue;
    //     }

    //     i++;
    // }

    //Qs => 4
   //    for(int i = 0; i < 5; i++){
   //        for(int j = i; j <= 5; j++){
   //           cout<<i << " " << j <<endl;
   //         }
   //     }

    //Qs => 5
    for(int i = 0; i < 5; i++){
        for(int j = i; j <= 5; j++){
            if(i+j == 10){
                break;
            }
            cout<<i << " " << j <<endl;
        }
    }

}



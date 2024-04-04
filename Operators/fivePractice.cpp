#include<iostream>
using namespace std;
int main() {

    //QS => 1
    // int a, b = 1;
    // a = 10;
    // if(++a){
    //     cout<<b<<endl;
    // }
    // else{
    //     cout<<++b<<endl;
    // }

    //QS => 2

    // int a = 1;
    // int b = 2;
    // if(a-- > 0 && ++b > 2 ){
    //     cout<<"stage1 - Inside If "<<endl;
    // }
    // else{
    //     cout<<"stage2 - Iside else"<<endl;
    // }

    // cout<<a <<" " <<b <<endl;

    //QS => 3
    // int n = 3;
    // cout<< (25 * (++n));

    //QS => 4

    // int a = 1;
    // int b = a++; //1
    // int c = ++a; //3
    // cout<< b <<" "<<c <<endl;

    //QS => 5
    int a = 1;
    int b = 2;
    if(a-- > 0 || ++b > 2 ){
        cout<<"stage1 - Inside If "<<endl;
    }
    else{
        cout<<"stage2 - Iside else"<<endl;
    }

    cout<<a <<" " <<b <<endl;

}
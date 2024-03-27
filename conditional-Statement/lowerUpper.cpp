#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a chracter :"<<endl;
    cin>>ch;
    
     
    if(ch>='A' && ch<='Z'){
        cout<<"Uper case character :"<<endl;
    }
    else if(ch>='a' && ch<'z'){
        cout<<"Lower case character :"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Numeric case";
     
    }
}    
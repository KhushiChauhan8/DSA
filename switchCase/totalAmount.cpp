#include<iostream>
using namespace std;
int main() {
    int amount;
    cout<<"Enter tatal amount : ";
    cin>>amount;
    
    int Rs100, Rs50, Rs20, Rs10, Rs1;

    switch(1){
        case 1:  //amount is 1585
        Rs100 = amount/100; //15
        amount = amount % 100; //85
        cout<<"No: of 100 rupees Notes are required is:"<<Rs100<<endl;

        case 2: //85
        Rs50 = amount/50; //1
        amount = amount % 50; //35
        cout<<"No: of 50 rupees Notes are required:"<<Rs50<<endl;

        case 3:
        Rs20 = amount/20; // 1
        amount = amount % 20; //15
        cout<<"No: of 20 rupees Notes are required:"<<Rs20<<endl;

        case 4:
        Rs10 = amount/10; //1
        amount = amount % 10; //5
        cout<<"No: of 10 rupees Notes are required:"<<Rs10<<endl;

        case 5:
        Rs1 = amount/1; //5
        amount = amount % 1; //0
        cout<<"No: of 1 rupees Notes are required:"<<Rs1<<endl;


    }
}
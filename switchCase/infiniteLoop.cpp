#include<iostream>
using namespace std;
int main() {
    while(1){
        cout<<"infinite loop"<<endl;


        int ch = 'd';
        int num = 2;

        switch (num)
        {
        case 1:
              cout<<"first"<<endl;
              break;
        case 2:
               switch ( ch )
               {
                  case 'd':
                    cout<<"d for dsa"<<endl;
                    break;
                }
        }
        exit(0);
    }
} 
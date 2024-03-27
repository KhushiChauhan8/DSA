#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        // Space print kar lo
        int space = (i > 1) ? (i - 1) * 2 : 0; // Adjust space based on the line number
        while (space) {
            cout << " ";
            space = space - 1;
        }
        // Number print kar lo
        int j = i;
        while (j <= n) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

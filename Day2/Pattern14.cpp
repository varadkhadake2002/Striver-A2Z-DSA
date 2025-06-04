#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Right-Angled Triangle with Increasing Alphabets =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;



    for(int i = 1; i<=rows; i++){
        char ch = 'A';
        for(int j = 1; j<=i; j++){
            cout << ch << " ";
            ch++;
        }
        
        cout << endl;
    }

    return 0;
}

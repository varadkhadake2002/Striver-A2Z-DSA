#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Right-Angled Triangle with Repeated Alphabet =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    char ch = 'A';

    for(int i = 1; i<=rows; i++){
        
        for(int j = 1; j<=i; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    return 0;
}

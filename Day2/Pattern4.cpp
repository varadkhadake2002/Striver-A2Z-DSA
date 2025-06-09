#include<bits/stdc++.h>
using namespace std;

int main() {

    //=========== Right-Angled Triangle with Numbers =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1; i<=rows; i++){
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

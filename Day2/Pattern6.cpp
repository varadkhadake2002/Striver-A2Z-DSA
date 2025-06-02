#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Right-Angled Triangle with Repeated Numbers =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }




    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

    //=========== Right-Angled Triangle with Continuous Numbers =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int num = 1;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}


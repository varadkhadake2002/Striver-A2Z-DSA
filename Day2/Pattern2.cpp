#include <iostream>
using namespace std;

int main() {

    //=========== Reverse Number Triangle =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i<=rows; i++){
        for(int j = i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}

#include <iostream>
using namespace std;

int main() {

    //=========== Right Angle Triangle =========

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }


    return 0;
}

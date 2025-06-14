#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks [5] = {99,100,54,36,88}; // We can assign value too for each of the block.

    double price[] = {98.99,105.67,30.00}; // 3, It automatically detects / counts the assigned values and set the size.


    int sz = sizeof(marks)/sizeof(int);

    for(int i = 0; i<sz; i++){
        cout << "The marks of Student " << i << " is "<< marks[i] << "\n"; 
    }
    


    // cout << marks[1] << "\n";
    // cout << marks[2] << "\n";
    // cout << marks[3] << "\n";
    // cout << marks[4] << "\n";
    // cout << marks[0] << "\n";
    // cout << marks[5] << "\n"; // HERE IT WILL PRINT A GARBAGE VALUE CAUSE IT'S EXCEEDING THE INDEXING FOR THE GIVEN ARRAY.

    return 0;

}
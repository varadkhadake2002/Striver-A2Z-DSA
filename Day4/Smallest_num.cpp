#include <bits/stdc++.h>
using namespace std;

int main(){

    //------------------------------------------ TAKING INPUT FROM USER ----------------------------------------------------------//

    int sze, inx;
    int smz = INT_MAX;
    cout << "Enter the size of array you want to print: ";
    cin >> sze;

    int arr[sze];

    for(int i=0; i<sze; i++){
        cout << "Enter the value of place " << i << " : ";
        cin >> arr[i];
    }

    for(int i = 0; i<sze; i++){

        if(arr[i]<smz){
            smz = arr[i];
            inx = i;
        }

    }

    cout << "The smallest number is" << smz << "\n";
    cout << "The smallest number index is " << inx << "\n";




    //-------------------------------------------- STORING INPUT MANUALLY  --------------------------------------------------------//

    int marks [5] = {72, 11 , -2, 20, -12};

    int sz = sizeof(marks)/sizeof(int);
    int sm = INT_MAX, index;

    for(int i = 0; i<sz; i++){

        if(marks[i]<sm){
            sm = marks[i];
            index = i;
        }

    }
    

    cout << "The smallest number is" << sm << "\n";
    cout << "The smallest number index is " << index << "\n";

    return 0;
}
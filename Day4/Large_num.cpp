#include <bits/stdc++.h>
using namespace std;

int main(){

    //------------------------------------------ TAKING INPUT FROM USER ----------------------------------------------------------//

    int sze;
    int smz = INT_MIN;
    cout << "Enter the size of array you want to print: ";
    cin >> sze;

    int arr[sze];

    for(int i=0; i<sze; i++){
        cout << "Enter the value of place " << i << " : ";
        cin >> arr[i];
    }

    for(int i = 0; i<sze; i++){

        if(arr[i]>smz){
            smz = arr[i];
        }

    }

    cout << "The largest number is" << smz << "\n";



    //-------------------------------------------- STORING INPUT MANUALLY  --------------------------------------------------------//

    int marks [5] = {72, 11 , -2, 20, -12};

    int sz = sizeof(marks)/sizeof(int);
    
    int sm = INT_MIN;
    for(int i = 0; i<sz; i++){

        if(marks[i]>sm){
            sm = marks[i];
        }

    }
    

    cout << "The largest number is" << sm << "\n";

    return 0;
}
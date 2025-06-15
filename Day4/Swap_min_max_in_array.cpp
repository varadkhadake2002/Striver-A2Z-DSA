#include <bits/stdc++.h>
using namespace std;

void swapArray(int arr[], int sz){
    int sm = INT_MAX, index = -1;
    int bg = INT_MIN, inx = -1;

    for(int i = 0; i < sz; i++) {
        if(arr[i] < sm){
            sm = arr[i];
            index = i;
        }
        if(arr[i] > bg){
            bg = arr[i];
            inx = i;
        }
    }

    swap(arr[index], arr[inx]);
}

int main(){

    int arr[] = {5,3,9,2,7};
    int sz = sizeof(arr)/sizeof(int);

    cout << "Array before swapping largest and smallest number: ";
    for(int i = 0; i<sz; i++){
        cout  << arr[i] << " ";

    }
    cout << endl;

    swapArray(arr, sz);

    cout << "Array before swapping largest and smallest number: ";
    for(int i = 0; i<sz; i++){
        cout  << arr[i] << " ";

    }
    cout << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int sz){
    int st = 0, end = sz-1;

    while(st<end){
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}


int main(){

    int arr[7] = {4,2,7,8,1,2,5};
    int sz = 7, target = 8;

    cout << "Before Reversing array: ";
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr,sz);
    
    cout << "After Reversing array: ";
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
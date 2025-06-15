#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum+=arr[i];        
    }
    return sum;
}

int prodOfArray(int arr[], int sz){
    int product = 1;
    for(int i = 0; i<sz; i++){
        product*=arr[i];        
    }
    return product;
}

int main(){

    int arr[] = {1,2,3,4};
    int sz = sizeof(arr)/sizeof(int);
    cout << "The sum of Array is: " << sumOfArray(arr, sz) << "\n";
    cout << "The product of all elements of array is: " << prodOfArray(arr, sz) << "\n";
    return 0;
}
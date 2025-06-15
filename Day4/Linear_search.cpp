#include <bits/stdc++.h>
using namespace std;


int Lin_search(int arr[], int target, int sz){
    for(int i = 0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[7] = {4,2,7,8,1,2,5};
    int sz = 7, target = 8;

    cout << Lin_search(arr,8,7) << endl;
    return 0;
}
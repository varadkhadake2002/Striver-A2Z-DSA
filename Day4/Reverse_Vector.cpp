#include <iostream>
#include <vector>
using namespace std;


void reverse_vector(vector<int>& vec){
    int first = 0, last = vec.size()-1;

    while(first < last){
        swap(vec[first], vec[last]);
        first++;
        last--;
    }
}


int main(){

    vector<int> vec = {10, 11, 12, 13, 14, 15, 16};

    cout << "Vector before reversing: ";

    for (int val: vec){
        cout << val << " ";
    }


    reverse_vector(vec);

    cout << endl; 


    cout << "Vector after reversing: ";
    
    for (int val: vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;



int Linear_search(vector<int> vec, int target){
    for(int i = 0; i<vec.size(); i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;
}


int main(){

    vector<int> vec = {1,2,4,9,5,6};
    int target = 6;

    cout << Linear_search(vec, target) << endl; 

    return 0;
}
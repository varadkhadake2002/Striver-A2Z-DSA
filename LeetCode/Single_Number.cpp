#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        
    int ans = 0;

    for(int val: nums){
        ans = ans ^ val;
    }

    return ans;
}


int main(){

    vector<int> vec1 = {4,1,2,1,2};
    cout << "Vec1 unique number : " << singleNumber(vec1) << endl;
    vector<int> vec2 = {1};
    cout << "Vec2 unique number : " << singleNumber(vec2) << endl;
    vector<int> vec3 = {2,2,1};
    cout << "Vec3 unique number : " << singleNumber(vec3) << endl;

    return 0;
}
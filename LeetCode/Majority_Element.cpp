#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

        for (int val : nums) {
    if (count == 0) {
        candidate = val;
    }

    if (val == candidate)
        count++;
    else
        count--;
    }

    return candidate;

}

int main(){

    vector<int> vec1 = {3,2,3};
    cout << "Vec1 Majority element is: " << majorityElement(vec1) << endl;
    vector<int> vec2 = {2,2,1,1,1,2,2};
    cout << "Vec2 Majority element is: " << majorityElement(vec2) << endl;


    return 0;
}
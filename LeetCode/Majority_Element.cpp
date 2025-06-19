#include <iostream>
#include <vector>
using namespace std;

 int majorityElement(vector<int>& nums) {
        int freq = 0, ans  = 0;
        int n = nums.size();

        for (int val : nums) {
            if (freq == 0) {
                ans = val;
            }

            if (val == ans)
                freq++;
            else
                freq--;
        }


        int count = 0;
        for(int val: nums){
            if(val==ans){
                count++;
            }
        }

        if(count>n/2)
            return ans;
        else
            return -1;

        return ans;
    }
int main(){

    vector<int> vec1 = {3,2,3};
    cout << "Vec1 Majority element is: " << majorityElement(vec1) << endl;
    vector<int> vec2 = {2,2,1,1,1,2,2};
    cout << "Vec2 Majority element is: " << majorityElement(vec2) << endl;
    vector<int> vec3 = {1,2,3};
    cout << "Vec3 Majority element is: " << majorityElement(vec3) << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int n = arr.size();

    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        if(currSum > maxSum)
            maxSum = currSum;

        // If current sum goes negative, reset it
        if(currSum < 0)
            currSum = 0;
    }

    cout << "Max subarray sum = " << maxSum << endl;
    return 0;
}

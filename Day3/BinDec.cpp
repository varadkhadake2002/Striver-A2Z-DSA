#include <bits/stdc++.h> 
using namespace std;


int DecToBin(int decNum){
    int ans = 0, power = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        power *= 10;
    }

    return ans;
}


int main(){
    int decNum = 50;

    cout << "The decimal form of 50 is: " << DecToBin(decNum) << endl;

    return 0;

}
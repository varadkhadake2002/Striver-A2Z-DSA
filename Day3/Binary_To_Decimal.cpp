#include <bits/stdc++.h> 
using namespace std;


int BinToDec(int binNum){
    int ans = 0, power = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem*power);
        
        binNum /= 10;
        power *= 2;
    }

    return ans;
}


int main(){
    int binNum = 1100101;

    cout << "The decimal form of 1100101 is: " << BinToDec(binNum) << endl;


    return 0;

}
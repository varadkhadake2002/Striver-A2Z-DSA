#include <bits/stdc++.h> 
using namespace std;


int DecToBin(int decNum){
    int ans = 0, power = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem*power);
        power *= 10;
    }

    return ans;
}


int main(){
    int decNum = 50;

    cout << "The decimal form of 50 is: " << DecToBin(decNum) << endl;

    cout << "The decimal form of 1-10 is: " << "\n";

    for(int i = 1; i<=10; i++){
        cout << i << " : "<< DecToBin(i) << endl;
    }

    return 0;

}
#include <bits/stdc++.h>
using namespace std;

// double maxx(double num1, double num2){
//     if(num1>=num2){
//         return num1;
//     }
//     else{
//         return num2;
//     }
// }


int SumOfDigits(int n){
    
    int digitSum = 0;

    while(n>=0){
        int lastDigit = n%10;
        n = n/10;
        digitSum += lastDigit;
    }
    return digitSum;

}


int fact(int n){
    int facto = 1;

    for(int i = n; i>=1; i--){
        facto = facto*i;

    }



    return facto;
}

// int sumN(int n){

//     int sum = 0;

//     for(int i =1; i<=n; i++){
//         sum += i;
//     }
    
//     return sum;

// }

int main(){

    // cout << fact(5) << endl;
    // double num1, num2, num3;
    // cout << "enter two numbers: ";
    // cin >> num1 >> num2;

    // num3 = max(num1, num2);
    // cout << "The max is " << num3 << "\n";



    cout << SumOfDigits(145) << endl;;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter three numbers: ";
    cin>>a>>b>>c;

    if(a>=b && a>=c){
        cout << a << " is the largest number." << "\n";
    }
    else if(b>=a && b>=c){
        cout << b << " is the largest number." << "\n";
    }
    else{
        cout << c << " is the largest number." << "\n";
    }

    return 0;
}

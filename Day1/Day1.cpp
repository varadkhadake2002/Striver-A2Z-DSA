#include<bits/stdc++.h>
using namespace std;

int main() {

    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    ch = tolower(ch);

    if(ch>= 'a' && ch<= 'z'){
        if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout << "It is an vowel." << '\n';
        }
        else{
            cout << "It is an consonant." << '\n';
        }
        
    }
    else{
            cout << "It is an invalid input / Not an alphabet.";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {

    double a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    char ch;
    cout << "Enter and operator (+,-,/,*): ";
    cin >> ch;


    switch(ch){
        case '+':
            cout << "Result: " << a+b << '\n';
            break;
        case '-':
            cout << "Result: " << a-b << '\n';
            break;
        case '/':
            if(b != 0){
                cout << "Result: " << a/b << '\n';
                break;
            }
            else{
                cout << "Division by 0 is not allowed." << '\n';
            }
            break;
        case '*':
            cout << "Result: " << a*b << '\n';
            break;
        default:
            cout << "Invalid Operator." << '\n';                
    }

}

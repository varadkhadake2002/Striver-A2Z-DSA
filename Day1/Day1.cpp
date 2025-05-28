#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int age;
    bool student;
    char letter;
    float pi;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student or not (1 for Yes, 0 for No): ";
    cin >> student;

    if(student){
        cout << "You are a student" << "\n";
    } else {
        cout << "You are not a student" << "\n";
    }

    cout << "Enter your favourite alphabet letter: ";
    cin >> letter;

    cout << "Enter the value of pi: ";
    cin >> pi;

    if(pi == 3.14f){
        cout << "You are correct, the value of pi is 3.14" << "\n";
    } else {
        cout << "You are wrong, the value of pi is not " << pi << "\n";
    }

    return 0;
}

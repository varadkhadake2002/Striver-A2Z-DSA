#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int num;
    char letter;
    bool student;
    string name; 

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your roll no: ";
    cin >> num;

    cout << "Enter a favourite alphabet: ";
    cin >> letter;

    cout << "You are a student?(1 for yes or 0 for no): ";
    cin >> student;


    cout << "Your name is " << name << "\n" << "Your roll no is " << num << "\n" << "Favourite alphabet is " << letter << "\n";

    if(student){
        cout << "You are a student." << endl;
    }
    else{
        cout << "You are not student." << endl;
    }


    cout << "Size of num is: " << sizeof(num) << "\n";
    cout << "Size of letter is: " << sizeof(letter) << "\n";
    cout << "Size of student is: " << sizeof(student) << "\n";
    cout << "Size of name is: " << sizeof(name) << "\n";


    return 0;
}

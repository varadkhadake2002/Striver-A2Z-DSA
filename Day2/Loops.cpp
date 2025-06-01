#include<bits/stdc++.h>
using namespace std;

int main(){

    // ========== For Loop ==========
    cout << "For Loop(1 to 5): " << endl;
    for(int i=1; i<=5; i++){
        cout << i << " ";
    }
    cout << endl;
    // Output: 1 2 3 4 5


    // ========== While Loop =========
    cout << "While loop(1 to 5): " << endl;
    int j=1;
    while(j=<5){
        cout << j << " ";
        j++;
    }
    cout << endl;
    // Output: 1 2 3 4 5


    // ========== Do While Loop =======
    cout << "Do while loop(1 to 5): " << endl;
    int a=1;
    do{
        cout << a << " ";
        a++;
    }while(a<=5);
    cout << endl;
    // Output: 1 2 3 4 5

    
    return 0;
}
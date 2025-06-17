#include <iostream> 
#include <vector>
using namespace std;

int main(){

    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);


    // for(int val: vec){
    //     cout << val << " ";              //---------THIS PRINT THE VALUES OF VECTOR, JUST LIKE ANY OTHER FOR LOOP -----------
    // }
    // cout<<endl;
    cout << "Values before adding elements out of size: " << endl;
    cout << "Size: " << vec.size() << "\n";
    cout << "Capacity: " << vec.capacity() << "\n";

    cout << "---------------------------------------------------------------------------------------------------------------" << endl;

    vec.push_back(4);

    cout << "Values after adding elements out of size: " << endl;
    cout << "Size: " << vec.size() << "\n";
    cout << "Capacity: " << vec.capacity() << "\n";

    return 0;
}
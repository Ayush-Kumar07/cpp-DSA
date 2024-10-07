#include<iostream>
#include<vector>
using namespace std ;
int main () {
    vector<int> vec ;
    cout << "size = " << vec.size() << endl ;
    vec.push_back(23);
    vec.push_back(78);
    vec.push_back(90);
    cout<<"after push_back size = " << vec.size() << endl ;

    for(int val : vec ) {
        cout << val << endl ;
    }
    return 0;
}
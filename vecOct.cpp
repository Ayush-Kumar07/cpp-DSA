#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    vector<int> vec = {45,11,52,4,44,62} ;
    for(int val : vec ) {
        cout<< val << endl;
    }
}
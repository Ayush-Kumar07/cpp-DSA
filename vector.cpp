#include<iostream>
#include<vector>
using namespace std ;
love babbarint main() {
    vector<int> v; //assiging a vector v 
    cout<<"Capacity->"<<v.capacity()<<endl; //checking the capactiy of the vector 
    //after checking the capacity of vector we will insert a new num ber using pushback 
    v.push_back(10);
    cout<<"Capacity->"<<v.capacity()<<endl;
}
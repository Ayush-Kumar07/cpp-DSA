#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]>25){
            cout<<arr[i]<<endl;
        }
    }
}
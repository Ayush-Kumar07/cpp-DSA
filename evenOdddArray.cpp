#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"enter the number of array: " ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int evencount = 0 ;
    int oddcount = 0 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{oddcount++ ;
        }
    }
    cout<< "number of even are: "<<evencount << endl ;
    cout<< "number of odd are : "<<oddcount << endl ;
}
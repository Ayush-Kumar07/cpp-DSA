#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    int mul = 1;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            sum = sum+arr[i];
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2!=0){
            mul = mul * arr[i];
        }
    }
    cout<<"the no is: "<<sum<<endl;
    cout<<"the no is: "<<mul<<endl;
}
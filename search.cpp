#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,4,10,4,20,16,8,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter target : ";
    cin>>x;
    for(int i=0 ; i<n; i++){
        if(arr[i]==x){
            cout<<x<<"is present";
            break;
        }
    }
}
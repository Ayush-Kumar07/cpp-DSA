#include<iostream>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int l= 0 ;
    int h = n-1 ;
    int mid ;
    int found = 0;
    while(l<=h)
    {
        mid = (l+h)/2 ;
        if(arr[mid]==target)
        {
            cout<<"indec is "<<target<<": "<<mid;
            found =1 ;
            break;
        }
        else if (arr[mid]>target){
            h=mid-1 ;
        }
        else
        {
            l = mid+1 ;
        }
    }
    if(found==0){
        cout<<"Not found";
    }
}
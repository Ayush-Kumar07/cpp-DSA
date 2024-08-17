#include<iostream>
using namespace std;
int main(){
    int arr[8]={7,4,8,10,89,90,33,45,};

    int min = arr[0];
    for(int i=1;i<8;i++){
        if(min>arr[i]) min = arr[i];
    
    }
    cout<<min<<endl;

}
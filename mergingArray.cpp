#include<iostream>
using namespace std;
int main(){
    int arrA[7] ={1,3,4,7,9,10,11};
    int arrB[7] = {12,13,14,15,17,18,19};
    int arrC[14];
    for(int i=0 ; i<7 ; i++){
        arrC[i] = arrA[i];
    }
    for(int i = 0 ; i<7 ; i++){
        arrC[7 + i] = arrB[i];
    }
    for(int i = 0 ; i<14 ; i++){
        cout<< arrC[i]<<" ";
    }

    }

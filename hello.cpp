#include<iostream>
using namespace std;
int main(){
    int wtr[10000] = {24};
     int a = 24;
    for(int i=0; i<10000 ; i++)
    {
        wtr[i]=a;
        cout<< wtr[i] << endl;
    }
}
    
    
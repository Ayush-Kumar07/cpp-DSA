#include <iostream>
using namespace std ;
int main(){
    int a[6] = {10 , 8 , 5 , 22, 9 , 1};
    int sum = 0;
    for (int i=0; i<6; i++)
    {
        sum = sum + a[i];
    }
    cout<<"The sum of Array is"<<sum<<endl ;
}
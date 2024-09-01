#include<iostream>
using namespace std ;

int main() 
{
    int amount = 1330 ;
    int hundrednote = 0 , fiftynote = 0 , tennote = 0 ;
    switch (1) {
        case 1: 
        hundrednote = amount / 100 ;
        amount %=100 ;
        case 2:
        fiftynote = amount / 50 ;
        amount %= 50 ;
        case 3:
        tennote = amount / 10 ;
        amount %= 10 ;
        break;

        default:
            cout << "Invalid amount" << endl;
    }

    cout << "Number of 100 rs notes: " << hundrednote << endl;
    cout << "Number of 50 rs notes: " << fiftynote << endl;
    cout << "Number of 10 rs notes: " << tennote << endl;

    return 0;
}
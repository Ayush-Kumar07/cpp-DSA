#include <iostream>
using namespace std ;
int main()
{
    int a , b ;
    cout<<"Enter the valur of a: "<<endl;
    cin>>a ;
    cout<<"Enter the value of b: "<<endl;
    cin>>b ;
    char operation ;
    cout<<"Enter the opretion you want to perform: "<<endl;
    cin>>operation ;
    cout<<"your answer is: ";


    switch(operation){

        case '+' : cout << (a + b) << endl ;
                break ;
        case '-' : cout<< (a-b) << endl ;
                break;
        case '*' : cout<< (a * b) << endl ;
                break ;
        case '/' : cout << (a / b)<< endl ;
                break ;

        default: cout<< "Please enter a valid operation: "<<endl ;
    }
}
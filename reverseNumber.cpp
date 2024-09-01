#include<iostream>
using namespace std ;

int main()
{
    int n;
    cout << "Enter any number : " << " ";
    cin >> n;

    int rev  = 0;
    int count = 0 ;
    int oddcount = 0 ;
    while(n > 0)
    {
        int digit = n  % 10;
        rev = rev * 10 + digit;
        n /= 10;
        if(digit%2==0){
            count++;
        } else{
            oddcount++;
        }

    }
    cout << "reverse number are: " << rev << endl;
    cout<< "Even number : " << count << endl ;
    cout<< " odd number : "<< oddcount << endl ;

}

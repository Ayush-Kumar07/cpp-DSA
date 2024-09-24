#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
    char s[30] ;
    ofstream of("result");
    of <<"hello";
    of.close();
    cout<<"data saved\n";
    ifstream inf("result");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}
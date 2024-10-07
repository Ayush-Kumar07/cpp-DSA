#include<iostream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country.tt");
    fout<<"INDIA\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();
}
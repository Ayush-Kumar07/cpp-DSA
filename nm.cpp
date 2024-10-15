#include<iostream>
using namespace std ;
class score 
{
    private:int val;
    public : score()
    {val =0;}
    void operator++()
    {val=val+1;}
    int show()
    {return(val);}
};
int main()
{
    score s1,s2;
    cout<<"\n initial value of s1 object = "<<s1.show();
    cout<<"\n initial value of s2 object = "<<s2.show();
    ++s1;
    ++s1;
    ++s2;
    cout<<"\n final value of s1 object = "<<s1.show();
    cout<<"\n final value of s2 onject = "<<s2.show();
    return 0;
}
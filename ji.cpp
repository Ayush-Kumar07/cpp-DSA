// #include<iostream>
// using namespace std ;
// int main()
// {
//     int * ptr ;
//     {
//         int v = 23 ;
//         ptr = &v ;
//         cout<<"value is (inside block ): " << *ptr<<"\n";
//         cout<<"address is (inside block):" << ptr<<"\n"; 
//     }
//     cout<<"Value is (outside block):"<<*ptr<<"\n";
//     cout<<"Address is (outside block):"<<ptr;
//     ptr=NULL;
// }
#include<iostream>
using namespace std ;
class Array 
{
    int * arr ;
    int size ;
    public :
    void get_data(int n)
    {
        size = n ;
        arr = new int [size];
        cout<<"\nEnter elements:";
        for (int i=0;i<size;i++)
        {
            cin>>*(arr+i);
        }
    }
    void add()
    {
        int sum = 0 ;
        for(int i= 0 ; i<size ; i++)
        {
            sum +=*(arr+i);

        }
        cout<<"\n Sum of elements = "<<sum;
    }
};
int main()
{
    Array a;
    int n ;
    cout<<"\n Enter the number of elements:"<<endl;
    cin>>n;
    a.get_data(n);
    a.add();
    return 0;
}
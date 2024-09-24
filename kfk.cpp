// #include<iostream>
// using namespace std ;

// class x
// {
//     public:
//     int a ;
//     void f(int b)
//     {
//         cout<< "The value of b is " << b << endl;
//     }
// };
// int main()
// {
//     int x::*ptiptr = &x::a;
//     void(x::*ptfptr)(int) =&x::f;
//     x xobject ;
//     xobject.*ptiptr = 10 ;
//     cout<<"The value of a is " << xobject.*ptiptr<< endl;
//     (xobject.*ptfptr) (20);
// }
#include<iostream>
using namespace std ;
class box{
    public : 
    box(double l = 2.0 , double b = 2.0 , double h = 2.0 ) {
        cout<< "Constructor called." << endl ;
        length = l ;
        breadth = b ;
        height = h ;
    }
    double volume () {
        return length * breadth * height ;
    }
    int compare (box Box ) {
        return length * breadth * height ;
    }
    int compare (box Box) {
        return this-> volume() > box.volume();
    }
    private :
    double length ;
    double breadth ;
    double height ;
}
    

#include<iostream>
using namespace std;
class Apple {
    public :
    int i ;
    void countApple(){
        cin>>i;
    }
};
class Banana {
    public:
    int j;
    void countBanana(){
        cin>>j;
    }
};
class Fruits : public Apple , public Banana
{
    public:
    void disp()
    {
        cout<<i+j;
    }
};
int main (){
    Fruits obj;
    obj.countApple();
    obj.countBanana();
    obj.disp();
}
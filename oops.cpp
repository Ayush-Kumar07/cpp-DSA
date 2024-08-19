#include<iostream>
using namespace std ;
class hero{
    public:
    int health ;
    char level ;
    void print(){
        cout << level << endl ;
    }
};

int main(){
    hero ayush;
    ayush.health =70 ;
    ayush.level = 'A' ;
    cout << "health is: " <<ayush.health<<endl ;
    cout<< "level is: " << ayush.level << endl;
}
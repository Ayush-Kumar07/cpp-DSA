#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> ticket;
    ticket.push_back(1000);
    ticket.push_back(2347);
    ticket.push_back(7777);

    cout << ticket[0] << endl ;
    cout << ticket[1] << endl ;
    cout << ticket[2] << endl ;

    cout<< ticket.size() << endl ;
    cout<< ticket.empty() << endl ;
}

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *first=NULL;
    first = new node();
    first -> data = 10;
    first -> next = NULL;
    
    struct node *second = NULL;
    second = new node();
    second->data = 20;
    second->next = NULL;
    
    first->next = second;
    
    struct node *third = new node();
    third->data = 30;
    third->next = NULL;
    
    second->next = third;
    
    cout<<first->next<<endl;
    cout<<second->next<<endl;
    cout<<third->next<<endl;
    return 0;
}
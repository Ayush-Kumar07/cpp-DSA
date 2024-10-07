#include<iostream>
using namespace std;
#define MAX 5
int top=-1;
int stack[MAX];
void push(int value){
    if(top==MAX-1){
        cout<<"Overflow"<<endl;
    }else{
        stack[++top]=value;
        cout<<"Pushed Value: "<<value<<endl;
    }
}
void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    } else {
        int removed = stack[top--];
        cout<<"Popped value"<<removed<<endl;
    }
}
void display(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    } else {
        for(int i=top; i>=0 ; i--){
            cout<<stack[i]<<" ";
        }
    }
}
int main () {
    int choice , value ;
    while(true){
        cin>>choice;
        switch(choice){
            case 1:
            cin>>value;
            push(value);
            break;
            case 2:
            pop();
            case 3:
            display();
            case 4:
            return 0;
            default:
            cout<<"Invalid choice";
        }
    }
}
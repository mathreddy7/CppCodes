#include<iostream>
using namespace std;
#define MAX 5
int top=-1;
int stack[MAX];
//checking stack is full;
int is_full(){
    if(top==MAX-1)
    cout <<"Stack is full !";
    return(top==MAX-1);
}
//Checking stack is empty 
int isempty(){
    if(top==-1)
    cout<<"Stack is empty !";
    return(top==-1);
}
//push operation
void push(int k){
    if(is_full()){
        cout<<"Hye cant add elements bcz itz full off !"; }
    else{ 
    stack[++top]=k;}
}
//pop operation
int pop(){
    if(isempty){
        cout<<"No elemnts to out of stack";
    
    return -1;}
    else
    top--;
    cout<<"Poped element out of stack";
}
int main(){
    {
        is_full();
        push(7);
        push(13);
        isempty();
        push(0);
        is_full();
        pop();
        isempty();
    }
}
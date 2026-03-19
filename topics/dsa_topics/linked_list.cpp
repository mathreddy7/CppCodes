#include<bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node* next;
    node (int a){
        value=a;
        next =nullptr;
    }
};
int main(){
    node* newnode=new node(7);
    cout<<newnode->value<<" BOSS "<<newnode->next<<endl;
    node* new1node=new node(13);
    newnode->next=new1node;
    cout<<new1node->value<<" BOSS "<<new1node->next<<endl;
    cout<<newnode->value<<" BOSS "<<newnode->next<<endl;
}
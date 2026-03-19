#include<bits/stdc++.h>
using namespace std;
vector<int >v(100);
vector<int >pv(100);
int m=0,n=0;
void enq(int a,int s){
    if(s){ pv.push_back(a);
    n++;}
    else{
        v.push_back(a);
    }
}
void deq(){
    m++;
}
void front (){
    cout<<v[m]<<endl;
}
void back(){
    cout<<v[n];
}

int main(){
    cout<<"We are doing queue data stucture \n";
    cout<<"Enter 1 to add\n";
    cout<<"Enter 2 to delete\n";
    cout<<"Enter 3 to print front element\n";
    cout<<"Enter 4 to print back element\n ";
    int l;cin>>l;
    while(1){
        if(l==1){
            int x;cin>>x;
            cout<<"is this priority yes means 1 no means 0";
            int k;cin>>k;
            enq(x,k);
        }else if(n==2){
            deq();
        }else if(n==3){
            front();
        }else if(n==4){
            back();
        }

    }
}

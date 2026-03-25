#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int c1=0,c2=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c2>0){
        cout<<"2 ";
        c2--;
    }
    if(c1>0){
        cout<<"1 ";
        c1--;
    } 
    for(int i=0;i<c2;i++){
        cout<<"2 ";
    }
    for(int i=0;i<c1;i++){
        cout<<"1 ";
    }

}
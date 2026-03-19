#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int ,int >mp;
    int p;cin>>p;
    while (p){
    cout<<"Enter inedx of root node\n";
    int i ;cin>>i;
    mp[i];
    cout<<"K eq to 1 for left |&| 2 for right";
    cout<<"Enter value";
    int val;cin>>val;
    int k;cin>>k;
    if(k=1){
    mp[(2*i)+1]=val;
    }
    else 
    mp[(2*i)+2]=val;
    p--;
    }
}
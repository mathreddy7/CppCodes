#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    vector<int>v;
    int k=n;
    while(k){
        int p=k%10;
        k/=10;
        if(p==4||p==7){
            v.push_back(p);
        }
    }
    if(v.size()==4||v.size()==7){
        cout<<"YES"<<v.size();

    }else{
        cout<<"NO "<<v.size();
    }
}   
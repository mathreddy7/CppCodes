#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while (t--){
        long long x;
        cin>>x;
        vector<int >v;
        while(x>0){
            int k=x%10;
            x=x/10;
            v.push_back(k);
        }
        
        int sz=v.size();
        int p=0;
        int r=0;
        reserve(v.begin(),v.end());
        while(p<10&&!v.empty()){
            r++;
            p+=v.back();
            v.pop_back();
        }
        cout<<sz-r<<endl;

    }
}   
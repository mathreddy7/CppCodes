#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    // vector<int>a(3);
    // vector<int>b(n,0);
    // vector<int>c(n,0);
    int ans=0;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(int i=0;i<n;i++){
    //     cin>>b[i];
    // }
    // qn missunderstood
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1){
            ans++;
        }
    }
    cout<<ans;
}   
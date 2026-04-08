#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define push_back pb;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vi v(n);
        int z=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int p;
        cin>>p;
        int ls=0;int rs=0;
        int x=v[p-1];
        for(int i=0;i<n;i++){
            if(x!=v[i]){
                z=0;
            }
        }
        
        for(int i=p-1;i>0;i--){
            if(v[i]!=v[i-1]){
                ls++;
            }
        }
        for(int i=p-1;i<n-1;i++){
            if(v[i]!=v[i+1]){
                rs++;
            }
        }
        int ans=max(ls,rs);
        if(ans%2==1){
            ans++;
        }
        cout<<ans<<"\n";
    }
}   //so much stuck for k=n and wested lot of time
//i need not to that my bad ;
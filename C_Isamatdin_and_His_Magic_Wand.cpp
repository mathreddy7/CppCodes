#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vl;
// typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vl v(n);
        int even = 0;
        int odd = 0;
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        
        if(even>0&&odd>0){
            sort(v.begin(), v.end());
        }
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
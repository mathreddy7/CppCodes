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
        ll k,n,m;cin>>k>>n>>m;
        vl v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        vl v2(m);
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        
        vl g;
        int i=0, j=0;
        bool possible = true;
        
        while(i<n || j<m){
            if (i < n && v1[i] == 0) {
                g.push_back(0);
                k++; 
                i++;
            } 
            else if (j < m && v2[j] == 0) {
                g.push_back(0);
                k++; 
                j++;
            } 
            else if (i < n && v1[i] <= k) {
                g.push_back(v1[i]);
                i++;
            } 
            else if (j < m && v2[j] <= k) {
                g.push_back(v2[j]);
                j++;
            }
            else {
                possible = false;
                break;
            }
        }
        
        if(!possible){
            cout<<-1<<"\n";
        }else{
            for(int x=0;x<g.size();x++){
                cout<<g[x]<<" ";
            }
            cout<<"\n";
        }
    }
}
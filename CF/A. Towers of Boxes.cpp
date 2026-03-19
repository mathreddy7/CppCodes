#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m,d;cin>>n>>m>>d;
        if (m>d){
            cout<<n<<"\n";
        }
        else if(d==m){
            if(n%2==0){
                cout<<n/2<<"\n";
            }
            else{
            cout<<n/2+1<<endl;
            }
        }
        else{
            int k=d/m+1;
            int p=0;
            while(n>0){
                n=n-k;
                p++;
            }
            cout<<p<<endl;
        }
    }
    
}   
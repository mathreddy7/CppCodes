#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    int x=0,y=n-1;
    int hd=abs(v[0]-v[n-1]);
    for(int i=1;i<n;i++){
        if(abs(v[i]-v[i-1])<hd){
            hd=abs(v[i]-v[i-1]);
            x=i;y=i-1;
        }
    }
    cout<<y+1<<" "<<x+1;
    
}   
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    if(n%2==0){
        for(int i=1;i<n+1;i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    else cout<<-1;
}   
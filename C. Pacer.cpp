#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int>a(n);
        vector<int>b(n);
        int count=0;
        int la=0,lb=0;
        cin>>a[0]>>b[0];
        if(a[0]%2==b[0]){
        lb=b[0];
        }
        else{ 
            count++;
            lb=b[0];
        }

        for(int i=1;i<n;i++){
            cin>>a[i]>>b[i];
            if(b[i]!=lb){
                count++;
                if(lb==0) lb=1;
                else lb=0;
            }
            else lb=b[i];
        }
        cout<<m-count<<endl;
    }

}   
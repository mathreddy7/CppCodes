#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t; 
    while(t--){
        int n,k;cin>>n>>k;
        int diff=INT_MIN;
        int temp =0;
        for (int i =0;i<n;i++){
            int x;cin>>x;
            int curdiff=x-temp;
            diff=max(diff,curdiff);
            temp = x;
            

        }
        diff= max(diff,(k-temp)*2);
        cout<<diff<<endl;
    
    }
   
} 
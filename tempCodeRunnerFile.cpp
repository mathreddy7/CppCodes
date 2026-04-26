#include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef vector<long long> vl;
// typedef pair<int,int> pi;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     string s;cin>>s;
//     ll l=0,r=s.length()-1;
//     vl ans;
    
//     while(l<r){
//         while(l<r&&s[l]!='(') l++;
//         while(l<r&&s[r]!=')') r--;
//         if(l<r){
//             ans.push_back(l+1);
//             ans.push_back(r+1);
//             l++;r--;
//         }
//     }
    
//     if(ans.empty()){
//         cout<<0<<"\n";
//     }else{
//         cout<<1<<"\n";
//         cout<<ans.size()<<"\n";
//         sort(ans.begin(),ans.end());
//         for(ll i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<"\n";
//     }
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

bool isPal(string s) {
    string r=s;
    reverse(r.begin(),r.end());
    return r==s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin >> t;
    while(t--){
        string s;cin>>s;
        ll n=s.length();
        ll l=0,r=n-1;
        while(l<r&&s[l]==s[r]){
            l++;
            r--;
        }
        if(l>=r){
            cout<<s<<"\n";
            continue;
        }
        string rem=s.substr(l,r-l+1);
        string lpal="";
        
        for(ll i=1;i<=rem.length();i++){
            if(isPal(rem.substr(0,i))){
                lpal=rem.substr(0,i);
            }
        }
        
        string rpal="";
        for(ll i=1;i<=rem.length();i++){
            if(isPal(rem.substr(rem.length()-i,i))){
                rpal=rem.substr(rem.length()-i,i);
            }
        }
        
        string ans=s.substr(0, l);
        if(lpal.length()>rpal.length()){
            ans+=lpal;
        }else{
            ans+=rpal;
        }
        
        string rev=s.substr(0, l);
        reverse(rev.begin(),rev.end());
        ans+=rev;
        
        cout<<ans<<"\n";
    }
}

//checked one by one by two pointer 
//than reming sting checked max pal 
//from left and right both side
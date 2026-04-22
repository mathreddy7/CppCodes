//good i first thought that what can be 
//possiblities of arrangement of one two and twone
//i found this 3 only and i am just mad abt this
//this three and made jsut bruet force fun and 
//thats it !!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;
void func(string& s,ll i){
            if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'){
                if(s[i+3]=='n'&&s[i+4]=='e'&&i+4<s.size()){
                    s[i+2]='1';
                    return;
                }
                else{
                    s[i+1]='1';
                    return;
                }

            }
            if(s[i]=='o'&&s[i+1]=='n'&&s[i+2]=='e'){
                s[i+1]='1';
                return;
            }
        }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll n=s.size();
        
        for(ll i=0;i<n-2;i++){
            if(s[i]=='o'||s[i]=='t'){
               func(s,i);
            }
        }
        ll x=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1') x++;
        }
        cout<<x<<"\n";
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    
}
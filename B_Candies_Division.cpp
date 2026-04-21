#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vl;
typedef pair<int,int> pi;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        //ll z=k/2;z+=k;
        //ll p=n/z;
        ll x=n/k;
        cout<<(x*k)+min((n-(x*k)),k/2)<<"\n";
            
    }
    
}
///soorryyy i forgot to remove that if condn in last subm
// my single fomula wsa 
//masterpice  !! that built while writing code


/*Here i am just applied greeedy of 
just give to k kids than check possible to give again for them 
if yes give untill can give for k kids then later 
check how many left than remaining give max to k/2 kids 
not exceeding that condin
hhahah !!!! ha 
*/



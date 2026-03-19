#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long a,b,c,m;
        cin>>a>>b>>c>>m;
        long long  aa,ab,ac;
        //aa=((6*(m/a)-3*(m/lcm(a,b))-3*(m/lcm(a,b))+2*(m/lcm(lcm(a,b),c))));
        aa=((6*(m/a)-3*(m/lcm(a,b))-3*(m/lcm(c,a))+2*(m/lcm(lcm(a,b),c))));
        ab=((6*(m/b)-3*(m/lcm(a,b))-3*(m/lcm(c,b))+2*(m/lcm(lcm(a,b),c))));
        ac=((6*(m/c)-3*(m/lcm(c,b))-3*(m/lcm(a,c))+2*(m/lcm(lcm(a,b),c))));
        cout<<aa<<" "<<ab<<" "<<ac<<endl;

    }
    
}   
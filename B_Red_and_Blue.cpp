#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){

        // I am using kadanes algo if max subarray here;;

        int n,m;cin>>n;
        // int x1,x2;
        //vector< int > a(n) ;
        // cin>>a[0];
        int sum1=0,x1=0;
        for(int i =0 ; i < n ; i++){
            int x;
            cin>>x;
            sum1+=x;
            x1=max(x1,sum1);
            // a[i]=a[i]+a[i-1];

        }
        cin >> m ;
        // vector<int > b(m) ;
        // cin>>b[0];
        int sum2=0,x2=0;
        for(int i=0; i<m; i++){
            int y;
            cin>>y;
            sum2+=y;
            // b[i]= b[i]+b[i-1];
            x2=max(x2,sum2);
        }
        // x2=*max_element(b.begin(),b.end());
        // x1=*max_element(a.begin(),a.end());
        // if(x1<0) x1=0;
        // if(x2<0) x2=0;
        
        cout<<x1+x2<<endl;
    }
    
}   


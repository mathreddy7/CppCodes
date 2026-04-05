#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%3==0){
                c0++;
            }else if(x%3==1){
                c1++;
            }else{
                c2++;
            }
        }
        int count=0;
        if(c0>n/3){
            count+=c0-(n/3);
            c1+=c0-(n/3);
            c0=n/3;
        }
        if(c1>n/3){
            count+=c1-(n/3);
            c2+=c1-(n/3);
            c1=n/3;
        }
        if(c2>n/3){
            count+=c2-(n/3);
            c0+=c2-(n/3);
            c2=n/3;
        }
        if(c0>n/3){
            count+=c0-(n/3);
            c1+=c0-(n/3);
            c0=n/3;
        }
        if(c1>n/3){
            count+=c1-(n/3);
            c2+=c1-(n/3);
            c1=n/3;
        }
        if(c2>n/3){
            count+=c2-(n/3);
            c0+=c2-(n/3);
            c2=n/3;
        }
        cout<<count<<endl;

    }
    
    
}   
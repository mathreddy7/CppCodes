#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>p(n);
        // vector<int>a(n,0);
        //int mx=INT_MAX,idx=-1;
        for(int i=0;i<n;i++){
            cin>>p[i];
            }
            if(p[0]!=n&&p[n-1]!=n){
            cout<<-1<<endl;
            }
            else{
                for(int i=n-1;i>-1;i--){
                cout<<p[i]<<" ";
            }
            cout<<endl;
            }


            //had too much non sence just revering
            // will leads to soln bcz any how 
            //larger no. is atb one side 
            // when ever is i add element to array it will go on same side eithri 
           //left or right opposite to max elemnt;
        }

    //     if(idx!=0||idx!=n-1){
    //         cout<<-1<<endl;
    //     }
    //     else{

    //         int lp2=n/2,rp2=(n/2)+1;
    //         int lp=0,rp=n-1;
    //         for(int i=0;i<n;i++){
                
    //             if(p[lp]>p[rp]){
    //                 a[lp2]=p[lp];
    //                 if(lp2>-1) lp2--;
    //                 if(lp<=n/2) lp++;
    //             }else{
    //                 a[rp2]=p[rp];
    //                 if(rp2<n) rp2++;
    //                 if(rp>-1) rp--;
    //             }
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<a[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
}   
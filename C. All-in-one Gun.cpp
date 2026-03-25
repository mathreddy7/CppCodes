#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,h,k;cin>>n>>h>>k;
        vector<int >a(n);
        int max=0,idx=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(max<a[i]){
                max=a[i];
                idx=i;
            }
        }
        int rem=h%sum;
        int temp=a[idx];
        a[idx]=a[0];
        a[0]=temp;
        // for(int i=1;i<n;i++){
        //     a[i]=a[i]+a[i-1];
            
        // }
        if(rem==0){

            cout<<<<endl;
        }   
        else{
            int sec=0;
            for(int i=0;i<n;i++){
                rem-=a[i];
                sec++;
                if(rem<=0){
                    break;
                }
            }
            cout<<(h/sum)*(n+k)+sec<<endl;
        }
    }
}   
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,pt=0;
        cin>>n>>m;
       vector<vector<int>>v(m,vector<int>(n));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[j][i];   
        }
       }for(int x=0;x<n-1;x++){
       for(int l=x+1;l<n;l++){
        for(int z=0;z<m;z++){
            int g=v[z][l]-v[z][x];
            if(g>0){
                pt=pt+g;
            }else{
                pt=pt-g;
            }
        }
    }
      //  cout<<pt<<endl;
}
       cout<<pt<<endl;
    }
    
}
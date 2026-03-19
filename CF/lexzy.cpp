#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,max=0,ix=0;
        cin>>n;
        vector<int> v(n);
        for(int j=0;j<n;j++){
            cin>>v[j];
            if(max<v[j]){
                max=v[j];
                ix=j;
            }
        }
        if(ix>0){
            for(int k=ix;k>=0;k--){
                cout<<v[k]<<" ";
            }
            for(int z=ix+1;z<n;z++){
                cout<<v[z]<<" ";
            }
        }
        else{
            for(int m=0;m<n;m++){
                cout<<v[m]<<" ";
            }
        }
        cout<<endl;
    }
}
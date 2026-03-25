#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while (t--)
    {
        int n,i,j;
        cin>>n;
        vector<int>arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for( j=0;j<n;j++){
            if(arr[j]!=1){
               if (arr[j+1]%arr[j]==0){
                arr[j+1]+=1;
               }}
            else{
            if(arr[j+1]%arr[j]==0){
                arr[j]+=1;
                arr[j+1]+=2;
            }
        }
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}
    

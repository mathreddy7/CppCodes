#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num;
        cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        //case 1 cheking by fixing 1st
        int min1=1e9,min2=1e9,max1=-1,max2=-1;
        for(int a=1;a<n;a++){
            if(min1>ar[a]){
                min1=ar[a];
            }
        }
        for(int a=1;a<n;a++){
            if(max1<ar[a]){
                max1=ar[a];
            }
        }
        //case 2 last fixing
        for(int a=0;a<n-1;a++){
            if(min2>ar[a]){
                min2=ar[a];
            }
        }
        for(int a=0;a<n-1;a++){
            if(max2<ar[a]){
                max2=ar[a];
            }
        }
        vector<int>nums(6);
        nums.push_back(ar[0]-min1);
        nums.push_back(ar[0]-max2);
        nums.push_back(ar[n-1]-min2);
        nums.push_back(ar[n-1]-max2);
        nums.push_back(ar[0]-ar[n-1]);
        int l=1e9;
        for(int k=0;k<n;k++){
            if(ar[k+1]-ar[k]<l){
                l=ar[k+1]-ar[k];
            }
        }
        nums.push_back(l);
        cout<<*min_element(nums.begin(),nums.end())<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;cin>>s;
    int n=s.length();
    //Thinking something bit littel simple
    vector<char>v;
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v.back();
}





    // int sum=0,ch1=0,ch2=0,ch3=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='+'){
    //         sum++;
    //     }else if(s[i]=='1') ch1++;
    //     else if(s[i]=='2') ch2++;
    //     else ch3++;
    // }
    // vector<char>v(n,'+');
    // if(ch1>0){
    // for(int i=0;i<2*ch1;i+=2){
    //     v[i]='1';
    // }}
    // if(ch2>0){
    // for(int i=2*ch1;i<(2*ch1)+1+(2*ch2);i+=2){
    //     v[i]='2';
    // }}
    // if(ch3>0){
    // for(int i=(2*ch1)+1+(2*ch2);i<n;i+=2){
    //     v[i]='3';
    // }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i];
    // }

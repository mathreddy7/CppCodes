#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    vector<int>v;
    //long long k=n;
    //before i used int for k so not taking value at all
    // and now i am good with long long 
    // and i dont know why i am persuing value of n litterally :-)
    while(n){
        int p=n%10;
        n/=10;
        if(p==4||p==7){
            v.push_back(p);
        }
    }
    if(v.size()==4||v.size()==7){
        cout<<"YES";

    }else{
        cout<<"NO ";
    }
}   
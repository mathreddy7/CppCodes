#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    while(n--){
        string s;
        cin>>s;
        // int k=s.length();
        char p=s.back();
        if(s.length()>10){
            cout<<*s.begin()<<s.length()-2<<p<<endl;
        }else{
            cout<<s<<endl;
        }
    }

    
    
}   
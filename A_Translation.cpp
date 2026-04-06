#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,t;cin>>s>>t;
    reverse(t.begin(),t.end());
    if(t.length()==s.length()){
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            cout<<"NO"; 
            return 0;
        }
    }
    cout<<"YES";    

}
else{
    cout<<"NO";
}
    
}   
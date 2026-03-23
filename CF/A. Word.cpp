#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int l=0;int u=0;
    for (char c:s){
        if(isupper(c)){
            u++;
        }else{
            l++;
        }
    }
    if (l>=u){
        for(char &c:s){
            c = tolower(c);
        }
    }else{
        for(char &c :s){
            c = toupper(c);
        }
    }
    cout<<s;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int dist(int k){
    int d=k%10;k/=10;
    int c=k%10;k/=10;
    int b=k%10;k/=10;
    int a=k;
    set<int>s={a,b,c,d};

    if(s.size()==4){
        return 1;
    }else{
        return 0;
    }
    }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int y;cin>>y;
    int x=y;
    while(1){
        y++;
        if(dist(y)){
            cout<<y;
            return 0;
        }
    }
}   
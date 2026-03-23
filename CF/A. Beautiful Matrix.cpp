#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int v[5][5];
    int a=-1,b=-1;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(2-a)+abs(2-b);
}   
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    vector<int >adj[4];
    adj[0].push_back(1);
    adj[2].push_back(0);
    adj[3].push_back(0);
    adj[3].push_back(2);


    vector<pair<int,int>>adjw[4];
    //name[list no.].push_back({set of elements});
    adjw[0].push_back({0,2});
    adjw[2].push_back({0,3});
    adjw[3].push_back({0,6});
    adjw[3].push_back({2,4});


}   
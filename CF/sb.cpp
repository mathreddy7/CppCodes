#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        
        vector<int> v;
        if(x == 0) {
            v.push_back(0);
        } else {
            while(x > 0) {
                v.push_back(x % 10);
                x /= 10;
            }
        }
        
        // Here reverse 
        reverse(v.begin(), v.end()-1);
        
        int sz = v.size();
        int r = 0;
        int p=0;
        while(p<10&& sz>1) {
            p+=v.back();
            if(p<10){
                r++;
            }
            v.pop_back();
        }
        
        cout << sz -r << '\n';
    }
    
    return 0;
}
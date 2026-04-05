#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector <int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;        
    }
    for (int i= v.size()-1;i>=0;i--){
        if (v[i]!=1 && v[i]!=4){
            cout<<"NO";
            return 0;
        }else{
            if (v[i]==1){
                if (i!=0 && v[i-1]==1){
                    continue;
                }else{
                    int count =0;
                    while(i>0 && v[i-1]==4){
                        count++;
                        i--;

                    } 
                    if (count>2){
                        cout<<"NO";
                        return 0;
                    }else{
                        continue;
                        
                    }
                }
            }else{
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
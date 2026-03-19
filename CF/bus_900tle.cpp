#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n%4==0&&n%6==0){
            cout<<-1<<endl;
        }
        else if{
            if(n%4==0){
                cout<<n/4<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
            
        }
        else(
            if(n&6==0){
                cout<<n/6<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        )
    }
    
}
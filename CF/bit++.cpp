#include<iostream>
//#include<vector>
#include<string>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="++X"||s=="X++"){
            p++;
        }
        else{
            p--;
        }
    }
    cout<<p;
}
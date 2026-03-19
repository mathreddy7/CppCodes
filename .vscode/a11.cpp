#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,k;
        cin>>n,x,k;
        if(x%k<=(k-x%k))
        cout<<x%k;
        else
        {
            if(k-x%k<=n-x)
            cout<<(k-x%k);
            else
            cout<<x%k;
        }
    }
}
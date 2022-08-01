#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int x=0;
            for(int i=1;i<=l-1;i++)
            {
                x = __gcd(x,a[i]);
            }
            for(int i=r+1;i<=n;i++)
            {
                x = __gcd(x,a[i]);
            }
            cout<<x<<endl;
            
        }
        
    }
}
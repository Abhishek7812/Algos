#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    
    for(int i=0;i<n;i++){
        cout<<hsh[i]<<" "<<endl;
        if(hsh[i]==1)
        {
            cout<<i<<endl;}
        if(n==1)
        {
            cout<<1;
        }
        
    }
    
    return 0;
}
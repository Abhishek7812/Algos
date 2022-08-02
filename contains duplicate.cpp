#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];

bool duplicate(int a[], int n)
{
    for(int i=0;i<n;i++)
    
    {
        if(hsh[i]>=2){
            return 1;
        }
    }
    return 0;
}
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
    
    if(duplicate(a,n))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    return 0;
}
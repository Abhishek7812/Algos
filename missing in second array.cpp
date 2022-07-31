#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int b[m];
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < m; j++){
            if (a[i] == b[j])
                break;
              
        }
        if (j == m)
            cout << a[i] << " ";
    }
    
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int first  = 0;
    int second = 1;
    cout<<first<<" "<<second<<" ";
    
    for(int i=2;i<n;i++)
    {
        int temp = first+second;
        first=second;
        second=temp;
        cout<<temp<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=0;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp=1;
            break;
        }
    }
    
    if(temp==1)
    {
        cout<<"Not a prime no"<<endl;
    }
    
    else{
        cout<<"Prime no"<<endl;
    }
    return 0;
}
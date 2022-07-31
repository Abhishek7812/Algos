#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x , y ,z;
    cin >>x >>y >>z;
    
    if(abs(x-z) > abs(y-z))
       cout<<"Cat B";
       
    else if(abs(x-z) < abs(y-z))
       cout<<"Cat A";
    
    else if(abs(x-z) == abs(y-z))
       cout<<"Mouse C";
    
    return 0;
}
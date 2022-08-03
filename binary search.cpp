#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int low,int high,int k)
{
    while(low<=high)
    {
    int mid = (low+high)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]< k)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    /*int n;
    cin>>n;
    
    int a[n];
    int k;
    cin>>k;
    
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }*/
    
    int a[] = {1 , 3 ,4 ,5 ,8};
    int n=5;
    int k=3;
    
    int ans = binary(a,0,n-1,k);
    if(ans==-1)
    {
        cout<<"search element is not present"<<endl;
    }
    else{
        cout<<"Element is at"<<" "<<ans;
    }
    return 0;
    
}    
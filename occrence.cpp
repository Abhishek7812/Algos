#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int x){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int lastOcc(int arr[], int n, int x){
    for(int i=n;i>0;i--)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int x=15;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<firstOcc(arr,n,x)<<endl;
    cout<<lastOcc(arr,n,x)<<endl;
    int first=firstOcc(arr,n,x);
    int last= lastOcc(arr,n,x);
    cout<<(last-first+1);
    

    return 0;
}
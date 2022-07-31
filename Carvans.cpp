#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int count=1;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	//min = a[0];
	for(int i=1;i<n;i++)
	    {
	        if(a[i-1]>=a[i]){
	            count++;
                  //min=a[i];
	       
	        }         
	    }
	 
	 cout<< count;
}
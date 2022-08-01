#include <bits/stdc++.h>
using namespace std;

bool pairSum(int a[],int n, int k)
{
    int l,r;
    l=0;
    r=n-1;
    
    sort(a,a+n);
    while(l<r)
    {
        if(a[l]+a[r]==k){
            return 1;
        }
        else if(a[l]+a[r] < k){
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}
int main() {
	int n;
	cin >> n;  
	int k;
	cin>>k;
	int a[n];
	 for(int i=0;i<n;i++) 
	 {
        cin>>a[i];
	 }
	 
	 if (pairSum(a, n, k)) {
    cout << "YES" << endl;
  } else {
    cout << "NO " << endl;
  }
	 
     return 0;
}
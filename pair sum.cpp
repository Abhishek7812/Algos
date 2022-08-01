#include <bits/stdc++.h>
using namespace std;

bool pairSum(int a[],int n, int k)
{
    for(int i=0;i<n;i++)
	 {
	     for(int j=i+1;j<n;j++)
	     {
		 if(a[i]+a[j]==k)
		 {
		     cout << "Pair with a given sum " << k << +
        " is (" << a[i] << ", " << a[j] << ")" <<
          endl;
			 return 1;
		 }
		 
		 
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
#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
	if (n < k)
	{
	cout << "Invalid";
	return -1;
	}

	int sum = 0;
	for (int i=0; i<k; i++)
	sum = sum+ arr[i];

	
	int max_sum = sum;
	int start=0;
	for (int i=k; i<n; i++)
	{
	max_sum += arr[i] - arr[start++];
	sum = max(sum, max_sum);
	}

	return sum;
}


int main()
{
    int n;
    cin>>n;
	int a[n];
	int k;
	cin>>k;
	for(int i=0;i<n;i++) 
	 {
        cin>>a[i];
	 }
	cout << maxSum(a, n, k);
	return 0;
}

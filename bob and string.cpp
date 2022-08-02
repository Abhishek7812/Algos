#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  string s1,s2;
	  cin >> s1 >> s2;
	  int a,b,i,sum;
	  
	  int h1[128] = {0}, h2[128] = {0};

        a = s1.length(), b = s2.length();

        for (i=0; i<a; i++)
            h1[s1[i]]++;

        for (i=0; i<b; i++)
            h2[s2[i]]++;

        sum = 0;

        for (i=0; i<128; i++)
            sum += abs(h1[i]-h2[i]);

        cout<<sum<<endl;
    }

    return 0;
	

}
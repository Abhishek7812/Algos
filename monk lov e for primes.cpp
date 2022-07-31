#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int a;

	for(int i=0; i< str.length(); i++)
	{
	    
       if(str[i]>='a' and str[i]<='z')
       {
           str[i] = str[i] -32;
        
      }
       
       else if(str[i]==' ')
       {
           cout<<endl;
       }
	   else if(str[i]>='A' and str[i]<='Z')
       {
           str[i] = str[i] + 32;
         
       }
	}
	cout<<str<<endl;
	int result =0;
    for(int i=0; i< str.length(); i++)
    {
        if(str[i]>='a' and str[i]<='z'){
            result = result - str[i];
        }
        else if(str[i]>='A' and str[i]<='Z')
       {
           result = result+str[i];
         
       }
    }
    if(result < 0){
        result = result*-1;
    }
    
    int flag=0;
    for(int i=2;i<result;i++)
    {
        if(result%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
    
}

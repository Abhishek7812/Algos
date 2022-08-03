#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
   char ch;
   cin>>ch;
   int len = str.length();
    for(int i=0;i<len;i++)
    {
        int j;
       if(str[i]==ch)
       {
           for(int j=0;j<len;j++)
           {
               str[j]=str[j+1];
           }
           j--;
           len--;
           
       }
           cout<<str[i]<<endl;

    }  
    
    
    
    
    return 0;
    
}    
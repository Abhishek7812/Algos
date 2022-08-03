#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int alpha=0;
    int digit=0;
    int sc=0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            alpha++;
        }
        else if(str[i]>='1' && str[i]<='9' )
        {
            digit++;
        }
        else{
            sc++;
        }
    }
    
    cout<<alpha<<endl;
    cout<<digit<<endl;
    cout<<sc<<endl;
    return 0;
    
}    
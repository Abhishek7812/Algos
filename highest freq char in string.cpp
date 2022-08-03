#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
    int hsh[128] = {0};
    
    int max=0;
    char freq;
    int i;
    
    for(int i=0;i<str.length();i++)
    {
        hsh[str[i]]++;
        if(hsh[str[i]]>max)
        {
            max=hsh[str[i]];
            freq = str[i];
            
        }
            cout<<hsh[str[i]]<<endl;

        
    }    
    
    cout<<freq<<endl;
    
    return 0;
    
}    
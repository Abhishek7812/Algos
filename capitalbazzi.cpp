#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int len = str.size();
    
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
             cout<<str[i];
        } 
        
        else if(str[i]==' '){
             cout<<endl;
            
        }

       
    }
    
    return 0;
}
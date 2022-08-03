#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int flag=0;
    int len=n.length();
    for(int i=0;i<len;i++)
    {
        if(n[i]!=n[len-i-1])
        {
            flag=1;
            break;
        }
       
    }
    if(flag==0){
        cout<<"It is a Palindrorme string"<<endl;
    }
    else{
        cout<<"Not a Palindrorme string"<<endl;
    }
    return 0;
}
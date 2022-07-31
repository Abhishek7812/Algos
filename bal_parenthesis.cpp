#include<bits/stdc++.h>
#include<string>
using namespace std;

bool balance(string str)
{
    stack<char>st;
    bool ans = true;
    
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(' or str[i] == '[' or str[i] == '{')
        {
            st.push(str[i]);
        }
        else if(str[i] == ')')
        {
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(str[i]==']')
        {
            if(!st.empty() and st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(str[i]=='}')
        {
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        
    }
    if(!st.empty())
    {
        return false;
    }
    return ans;
}

int main()
{
    string str = "[[{()}]";
    if(balance(str)){
        cout<<"It has balanced parenthesis";
    }
    else{
        cout<<"Not balanced";
    }
    
    return 0;
}
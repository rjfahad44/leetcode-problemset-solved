
#include<iostream> 
#include<stack>
using namespace std; 

bool isValid(string s) 
{
    stack<char> S; 
    char x;
    for (char c:s) 
    { 
        if (c=='(' or c=='{' or c=='[') 
        {
            S.push(c); 
            continue; 
        } 
        if (S.empty()) 
           return false; 
        switch (c) 
        { 
        case ')':
            x = S.top(); 
            S.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break;
       case '}': 
            x = S.top(); 
            S.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
        case ']': 
            x = S.top(); 
            S.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        }
    }
    return (S.empty()); 
} 

int main() 
{ 
    string s;
    while(cin>>s)
    {
    if (isValid(s)) puts("true"); 
    else puts("false");
    }
    return 0; 
} 
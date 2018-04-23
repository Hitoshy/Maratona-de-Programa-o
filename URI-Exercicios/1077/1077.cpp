#include <bits/stdc++.h>
using namespace std;

int priority(char s)
{
    switch(s)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default :
        return 0;
    }
}

int main()
{
 
    string ara;
    stack <char> mt;
    vector <char> saida;
    int tc;
 
    cin>>tc;
    while(tc--)
    {
        cin>>ara;
 
        for(int i=0;i<ara.length();i++)
        {
            if( ara[i] == '+' || ara[i] == '-' || ara[i] == '*' || ara[i] == '/' || ara[i] == '^')
            {
                while( !mt.empty() && priority(mt.top()) >= priority(ara[i]) )
                {
                    saida.push_back(mt.top());
                    mt.pop();
                }
                mt.push(ara[i]);
            }
            else if(ara[i] == '(') mt.push(ara[i]);
            else if( ara[i]==')' )
            {
                while( mt.top() !='(' )
                {
                    saida.push_back(mt.top());
                    mt.pop();
                }
                mt.pop();
            }
            else
            {
                saida.push_back(ara[i]);
            }
    }
 
        while( !mt.empty() )
        {
            saida.push_back(mt.top());
            mt.pop();
        }
 
        for(int i=0;i<saida.size();i++) cout<<saida[i];
        
        cout<<endl;
        while(!saida.empty())
        {
            saida.pop_back();
        }
 
    }
 
    return 0;
}
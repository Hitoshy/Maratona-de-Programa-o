#include <bits/stdc++.h>
using namespace std;

int mdc(int a,int b)
{
    if(b == 0) return a;
    else
    return mdc(b,a%b);
} 

int main(){
    int n, a, b, c, d, maximo, minimo, r;
    char op;
    
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d / %d %c %d / %d",&a,&b,&op,&c,&d);
        if(op=='/')
        {
              maximo = b*c;
              r = a*d;
              printf("%d/%d = ",r,maximo);
              minimo = mdc(r,maximo);
              printf("%d/%d\n",r/minimo,maximo/minimo);
        }
        else
        {
             maximo = b*d;
             if(op == '+') r = a*(maximo/b) + c*(maximo/d);
             else if(op == '-') r = a*(maximo/b) - c*(maximo/d);
             else if(op == '*') r = a*c;
             
             printf("%d/%d = ",r,maximo);
             minimo = mdc(r,maximo);
             
             if(minimo < 0) minimo = -1*minimo;
             printf("%d/%d\n",r/minimo,maximo/minimo);
        }
    }
    return 0;
}
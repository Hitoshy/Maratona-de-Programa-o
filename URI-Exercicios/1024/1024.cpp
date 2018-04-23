#include <bits/stdc++.h>
using namespace std;

void func(char w[],int l)
{
    char temp;
    for (int i=0;i<l/2;i++)
    {
            temp=w[i];
            w[i]=w[l-i-1];
            w[l-i-1]=temp;
    }
}

int main(){
    int n,i,j,l;
    char f[1001];
    
    scanf("%d",&n);
    std::cin.getline(f,0);
    for(i = 0; i < n; i++)
    {
        std::cin.getline(f,1001);
        
        for(j = 0; f[j] != '\0'; j++)
        {
            if(f[j]>=65 && f[j]<=90 || f[j]>=97 && f[j]<=122)
            {
                f[j] += 3;
            }
        }
        
        l=strlen(f);
        func(f,l);
        
        for(j = l/2; f[j] != '\0'; j++) f[j]--;
        
        printf("%s\n",f);              
    } 
    return 0;
}
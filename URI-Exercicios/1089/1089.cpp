#include <bits/stdc++.h>
using namespace std;

int main()
{	
	long long int n;
	while(scanf("%lld", &n)!=EOF)
	{
		if(n==0) break;
		long long int v[n+1], aux[n], pico=0;
		for(long long int i=1; i<=n;i++)
		{
			scanf("%lld", &v[i]);
			if(i>1)
			{
				if((v[i]-v[i-1])<0) aux[i-1]=-1;
				else aux[i-1]=1; 
			}
			if(i==n)
			{
				v[0]=v[n];
				if((v[1]-v[0])<0) aux[0]=-1;
				else aux[0]=1;	
			}
		}
		for(long long int j=1; j<n;j++)
		{
			if(aux[j]!=aux[j-1]) pico++;
		}
		printf("%lld\n", pico+1);
		/*for(int k=0; k<n;k++)
		{
			printf("%lld ", aux[k]);
		}
		printf("\n");*/
	}
	return 0;
}
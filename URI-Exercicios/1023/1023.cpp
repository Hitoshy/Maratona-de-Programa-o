#include <bits/stdc++.h>
using namespace std;

int main()
{
	int aux=1;
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) break;

		int A, B, v[202]={}, maior=-1, soma1=0, soma2=0;
		double media=0;
		for(int i=0; i<n; i++)
		{
			scanf("%d %d", &A, &B);
			soma1+=A;
			soma2+=B;
			if(v[B/A]==0) v[B/A]=A;
			else if(v[B/A]!=0&&v[B/A]<A) v[B/A]=A;

			if(maior<B/A) maior=B/A;

			if(i==n-1) 
			{
				media=((double)soma2)/((double)soma1);
				printf("Cidade# %d:\n", aux);
				for(int j=0; j<=maior;j++)
				{
					if(v[j]!=0) printf("%d-%d ", v[j], j);
				}
				printf("\nConsumo media: %.2lf m3\n\n", media);
			}
		}
		aux++;
	}
	return 0;
}
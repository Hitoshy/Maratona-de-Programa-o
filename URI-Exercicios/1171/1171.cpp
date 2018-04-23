#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, maior=-1, v[2001]={}, aux;
	scanf("%d", &N);
	for(int i=0; i<N; i++)
	{
		scanf("%d", &aux);
		v[aux]++;
		if(aux>maior) maior=aux;
	}
	for(int j=0; j<=maior; j++)
	{
		if(v[j]!=0)
		{
			printf("%d aparece %d vez(es)\n", j, v[j]);
		}
	}
	return 0;
}
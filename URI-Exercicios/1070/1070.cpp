#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N, imp, j=0;
	scanf("%d", &N);
	for(int i=0; i<6;)
	{
		if((N+j)%2!=0)
		{
			printf("%d\n", N+j);
			i++;
		}
		j++;
	}
	return 0;
}
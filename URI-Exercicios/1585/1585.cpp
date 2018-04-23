#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	int A, B;
	for(int i=0; i<N; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d cm2\n", (A*B)/2);
	}
	return 0;
}
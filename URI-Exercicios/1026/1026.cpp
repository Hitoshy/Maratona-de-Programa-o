#include <bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long int A, B;
	while(scanf("%lu %lu", &A, &B)!=EOF)
	{
		printf("%lu\n", (A^B));
	}
	return 0;
}
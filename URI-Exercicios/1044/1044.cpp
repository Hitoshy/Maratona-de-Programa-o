#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	if(B%A==0 || A%B==0) printf("Sao Multiplos\n");
	else printf("Nao sao Multipĺos\n");
	return 0;
}
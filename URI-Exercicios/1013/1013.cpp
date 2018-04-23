#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, f;
	scanf("%d %d %d", &a, &b, &c);
	f = (a+b+abs(a-b))/2;
	f = (f+c+abs(f-c))/2;
	printf("%d eh o maior\n", f);
	return 0;
}
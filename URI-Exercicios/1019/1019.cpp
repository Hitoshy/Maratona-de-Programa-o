#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, horas, min, seg;
	scanf("%d", &n);
	horas = n/3600;
	min   = (n-horas*3600)/60;
	seg   = n-horas*3600-min*60;
	printf("%d:%d:%d\n", horas, min, seg);
	return 0;
}
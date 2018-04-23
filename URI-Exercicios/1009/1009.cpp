#include <bits/stdc++.h>
using namespace std;

int main()
{
 	string s;
	double a, b;
	getline(cin, s);
	scanf("%lf %lf", &a, &b);
	printf("TOTAL = R$ %.2lf\n", a+(0.15*b));
	return 0;
}
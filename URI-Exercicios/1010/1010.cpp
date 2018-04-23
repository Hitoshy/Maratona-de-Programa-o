#include <bits/stdc++.h>
using namespace std;

int main()
{
	double cod1, num1, val1, cod2, num2, val2;
	scanf("%lf %lf %lf %lf %lf %lf", &cod1, &num1, &val1, &cod2, &num2, &val2);
	printf("VALOR A PAGAR: R$ %.2lf\n", num1*val1+num2*val2);
	return 0;
}
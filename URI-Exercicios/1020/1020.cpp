#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ano, mes, dia;
	scanf("%d", &n);
	ano = n/365;
	mes = (n-ano*365)/30;
	dia = n-ano*365-mes*30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
	return 0;
}
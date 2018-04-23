#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, hyaku, gojuu, nijuu, juu, go, ni, ichi;
	scanf("%d", &n);
	hyaku = n/100;
	gojuu = (n-hyaku*100)/50;
	nijuu = (n-hyaku*100-gojuu*50)/20;
	juu   = (n-hyaku*100-gojuu*50-nijuu*20)/10;
	go    = (n-hyaku*100-gojuu*50-nijuu*20-juu*10)/5;
	ni    = (n-hyaku*100-gojuu*50-nijuu*20-juu*10-go*5)/2;
	ichi  = n-hyaku*100-gojuu*50-nijuu*20-juu*10-go*5-ni*2;
	printf("%d\n", n);
	printf("%d nota(s) de R$ 100,00\n", hyaku);
	printf("%d nota(s) de R$ 50,00\n", gojuu);
	printf("%d nota(s) de R$ 20,00\n", nijuu);
	printf("%d nota(s) de R$ 10,00\n", juu);
	printf("%d nota(s) de R$ 5,00\n", go);
	printf("%d nota(s) de R$ 2,00\n", ni);
	printf("%d nota(s) de R$ 1,00\n", ichi);
	return 0;
}
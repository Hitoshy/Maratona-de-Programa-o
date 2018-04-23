#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n;
	int hyaku, gojuu, nijuu, juu, go, ni, ichi, mgojuu, mnijuugo, mjuu, mgo, michi;
	scanf("%lf", &n);
	hyaku = n/100;
	gojuu = (n-hyaku*100)/50;
	nijuu = (n-hyaku*100-gojuu*50)/20;
	juu   = (n-hyaku*100-gojuu*50-nijuu*20)/10;
	go    = (n-hyaku*100-gojuu*50-nijuu*20-juu*10)/5;
	ni    = (n-hyaku*100-gojuu*50-nijuu*20-juu*10-go*5)/2;
	ichi  = n-hyaku*100-gojuu*50-nijuu*20-juu*10-go*5-ni*2;
	n     = n*100-hyaku*10000-gojuu*5000-nijuu*2000-juu*1000-go*500-ni*200-ichi*100;
	mgojuu   = n/50;
	mnijuugo = (n-mgojuu*50)/25;
	mjuu     = (n-mgojuu*50-mnijuugo*25)/10;
	mgo      = (n-mgojuu*50-mnijuugo*25-mjuu*10)/5;
	michi    = n-mgojuu*50-mnijuugo*25-mjuu*10-mgo*5;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", hyaku);
	printf("%d nota(s) de R$ 50.00\n", gojuu);
	printf("%d nota(s) de R$ 20.00\n", nijuu);
	printf("%d nota(s) de R$ 10.00\n", juu);
	printf("%d nota(s) de R$ 5.00\n", go);
	printf("%d nota(s) de R$ 2.00\n", ni);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", ichi);
	printf("%d moeda(s) de R$ 0.50\n", mgojuu);
	printf("%d moeda(s) de R$ 0.25\n", mnijuugo);
	printf("%d moeda(s) de R$ 0.10\n", mjuu);
	printf("%d moeda(s) de R$ 0.05\n", mgo);
	printf("%d moeda(s) de R$ 0.01\n", michi);
	return 0;
}
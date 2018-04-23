#include <bits/stdc++.h>
using namespace std;
int main()
{
	double A, B, C, D, E=0;
	scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
	double M=(A*2.0+B*3.0+C*4.0+D*1.0)/10.0;
	
	if(M<5.0) printf("Media: %.1lf\nAluno reprovado\n", M);
	else if(M>=7.0) printf("Media: %.1lf\nAluno aprovado\n", M);
	else 
	{
		scanf("%lf", &E);
		printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n", M, E);
		
		M=(M+E)/2.0;
		
		if(M>=5) printf("Aluno aprovado.\nMedia final %.1lf\n", M);
		else printf("Aluno reprovado.\nMedia final %.1lf\n", M);
	}
	return 0;
}
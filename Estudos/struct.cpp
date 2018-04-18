#include <bits/stdc++.h>
using namespace std;

typedef struct{
	string nome;
	int idade;
	float altura;
}pessoa;

int main()
{
	pessoa Japa, Korea;
	Japa.nome="André Hitoshi Shiva Yamamoto";
	Japa.altura=1.70;
	Japa.idade=20;

	Korea.nome="Woun Guow Kan";
	Korea.altura=1.88;
	Korea.idade=22;

	cout << Japa.nome << endl;
	return 0;
}
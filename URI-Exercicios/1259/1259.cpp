#include <bits/stdc++.h>
using namespace std;
bool descend(int i, int j)
{
	return i > j;
}
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	unsigned int n, aux;
	vector<unsigned int > par, impar;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &aux);
		if(aux%2==0) par.push_back(aux);
		else impar.push_back(aux);
	}
	qsort(par.data(), par.size(), sizeof(unsigned int), compare);
	sort(impar.begin(), impar.end(), descend);
	//qsort(impar.data(), impar.size(), sizeof(unsigned int), compare);
	for(int j=0; j<par.size(); j++) printf("%d\n", par[j]);
	for(int k=0; k<impar.size(); k++) printf("%d\n", impar[k]);
	return 0;
}
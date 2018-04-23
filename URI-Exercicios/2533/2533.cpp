#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	scanf("%d", &N);
	double M[N][2], SUM1=0, SUM2=0;
	for(int i=0; i<N; i++)
	{
		scanf("%lf %lf", &M[i][0], &M[i][1]);
		SUM1+=M[i][0]*M[i][1];
		SUM2+=M[i][1];
	}
	cout << fixed << setprecision(4) << (double)SUM1/(SUM2*100.0) << endl;
	return 0;
}
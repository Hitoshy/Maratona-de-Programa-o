#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int vi[10005];
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &vi[i]);
	int resp=0;

	priority_queue< pair<int,int> > fila;
	for(int i=0; i<n; i++) fila.push(make_pair(0,-i));

	while(m--){
		int c;
		cin >> c;
		int id= -fila.top().second;
		int l= -fila.top().first;
		fila.pop(); 
		fila.push(make_pair(-(1+vi[id]*c), id));
		resp = max(resp, 1+vi[id]*c);
	}
	printf("%d\n", resp);

	return 0;
}
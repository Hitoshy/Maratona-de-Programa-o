#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(cin >> s)
	{
		int cont=1, aux=0;
		for(int i=1; i<s.length(); i++){
			if(s[i]==s[i-1]){
				cont++;
				if(aux!=0){
					printf("1");
					aux=0;
				}
			}
			else if(s[i]!=s[i-1]){
				if(cont!=1){
					printf("%d%c", cont, s[i-1]);
					cont=1;
				}
				if(cont==1){
					if(aux==0){
						printf("1%c1", s[i-1]);
						aux++;
					}
					else{
						printf("%c", s[i-1]);
						aux++;
					}
				}
			}
		}
		printf("\n");
	}

	return 0;
}
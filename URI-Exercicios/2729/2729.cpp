#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		string str;
		vector <string> nomes;
		getline(cin,str);
		for(int j=0; j<strlen(str); j++){
			if(str[j]==' ')
			{
				nomes.push_back(str.begin(),j-1);
				erase(str.begin(),j);
			}
		}
		

	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	while(1)
	{
		char L;
		int N, V[4]={0,1,2,3}, p=0;
		scanf("%d", &N);
		if(N==0) break;

		for(int i=0;i<N;i++)
		{
			scanf("%c", &L);
			switch(L)
			{
				case 'D': 
				if(p==3) p=0;
				else p++;
				break;

				case 'E':
				if(p==0) p=3;
				else p--;
				break;
			}
		}
		
		switch(V[p-1])
		{
			case 0: printf("N\n");
			break;
			case 1: printf("L\n");
			break;
			case 2: printf("S\n");
			break;
			case 3: printf("O\n");
			break;
		}
		p=0;

	}
	return 0;
}
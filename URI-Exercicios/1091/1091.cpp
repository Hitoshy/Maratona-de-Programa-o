#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		if(n==0) break;

		int refx, refy, locx, locy;
		scanf("%d %d", &refx, &refy);
		for(int i=0; i<n; i++)
		{
			scanf("%d %d", &locx, &locy);
			if(locx==refx || locy==refy) printf("divisa\n");
			else if(locx>refx)
			{
				if(locy>refy) printf("NE\n");
				else printf("SE\n");
			}
			else
			{
				if(locy>refy) printf("NO\n");
				else printf("SO\n");
			}
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int b, n, d, c, v, tst;
    
    while(1){
        scanf("%d %d", &b, &n);
        if(b==0 && n==0) break;
        
        tst = 0;
        int r[b];
          
        for(int i = 1; i <= b; i++) scanf("%d",&r[i]);
        
        for(int j = 1; j <= n; j++)
        {
            scanf("%d %d %d", &d, &c, &v);
            r[d] -= v;
            r[c] += v;
        }

        for(int k = 1; k <= b; k++)
        {
            if(r[k] < 0)
            {
                tst = 1;
                break;
            }
        }
        
        if(tst == 1) printf("N\n");
        else printf("S\n");
}
	return 0;
}
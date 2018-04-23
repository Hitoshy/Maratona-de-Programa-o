#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, inteira, real;
    double vmax, vmin, total;

    while(cin>>n && n)
    {
        int N[n];
        total = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d.%d", &inteira, &real);
            N[i] = inteira *100 + real;
            total +=(double) N[i]/n;
        }

        vmin = 0;
        vmax = 0;

        for(int l = 0; l < n; l++)
        {
            if(N[l] < total)
            {
                vmin += ((int)(total - N[l]))/100.0;
            }
            else
            {
                vmax += ((int)(N[l] - total))/100.0;
            }
        }

        if(vmin > vmax)
        {
            printf("$%.2f\n",vmin);
        }
        else
        {
              printf("$%.2f\n",vmax);
        }
    }
    return 0;
}
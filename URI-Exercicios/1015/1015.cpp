#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x1, x2, y1, y2, absolx, absoly;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	absolx=fabs(x1 - x2);
	absoly=fabs(y1 - y2);
	printf("%.4lf\n", hypot(absolx, absoly));
	return 0;
}
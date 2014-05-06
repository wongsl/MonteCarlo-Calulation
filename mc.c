/* Monte Carlo Calulation for Pi.c              */
/* ID # 18017618                                */
/* author: Steven Wong                          */
/* date: Oct. 28 2010                           */

/*preprocessor directives*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*variable def*/
	double x;
	double y;
	double Pi = 0;
	int n, p = 0;	/*number of pts wanted, point*/
	int IN = 0, OUT = 0; /*# of pts in semi circle, # of Pts in square*/
	int r = 0;
	double s;


printf("Enter the radius of circles:");
scanf("%d", &r);
printf("Enter the number of points:");
scanf("%d", &n);

s = 2*r;
srand(0);
for(p = 1; p <= n; p++)
{

x = ((double)rand())/((double)RAND_MAX)*s;
y = ((double)rand())/((double)RAND_MAX)*s;


	if((x*x + (y-r) * (y-r)) <= r*r || ((x - 2*r)*(x - 2*r) + (y-r)*(y-r)) <= r*r)
	{
		printf("Point No. %d ( x = %.6f, y = %.6f ): \t IN \n", p, x, y);
		IN = IN + 1;
	}
	if((x*x + (y-r)*(y-r)) > r*r && ((x-2*r)*(x-2*r)+(y-r)*(y-r) > r*r))
	{
		printf("Point No. %d ( x = %.6f, y = %.6f ): \t OUT \n", p, x, y);
		OUT = OUT + 1;
	}
}
	printf("/*****In Summary*****/\n");
	printf("Points within circle areas : %d\n", IN);
	printf("Points out of circle areas : %d\n", OUT);
	Pi  = (4 *(double) IN )/(OUT + IN );
	printf("Pi = %.6f\n", Pi);


return 0;
}
/*EOF*/

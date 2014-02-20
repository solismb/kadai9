#include <stdio.h>
#include <math.h>

void secondeqa(int, int, int);

int main(void)
{
	int a, b, c;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);

	secondeqa(a, b, c);

	return 0;
}

void secondeqa(int a, int b, int c)
{
	double d;

	d = (b*b) - (4*a*c);
	b = b - 2 * b;
	
	if(d > 0)
	{
		printf("ans1= %lf\n", ( b + sqrt(d) ) / 2 * a );
		printf("ans2= %lf\n", ( b - sqrt(d) ) / 2 * a );
	}
	else if(d < 0)
	{
		d = d - 2 * d;
		printf("ans1= %lf + ( %lf) i\n", (double) b / (2*a), sqrt(d) / (2*a));
		printf("ans2= %lf + (-%lf) i\n", (double) b / (2*a), sqrt(d) / (2*a));
	}
	else
		printf("ans= %lf\n", (double) b / (2*a));
	
	return;
}

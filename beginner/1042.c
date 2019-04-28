#include <stdio.h>

int main()
{
	int a, b, c, x, y, z;
	scanf("%d%d%d", &a, &b, &c);
	x = a;
	y = b;
	z = c;
	if (a < b && a < c)
	{
		printf("%d\n", a);
		if (b < c)
		{
			printf("%d\n", b);
			printf("%d\n", c);
		}
		else
		{
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	else if (b < a && b < c)
	{
		printf("%d\n", b);

		if (a < c)
		{
			printf("%d\n", a);
			printf("%d\n", c);
		}
		else
		{
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}
	else if (c < b && c < a)
	{
		printf("%d\n", c);
		if (b < a)
		{
			printf("%d\n", b);
			printf("%d\n", a);
		}
		else
		{
			printf("%d\n", a);
			printf("%d\n", b);
		}
	}
	printf("\n%d\n%d\n%d\n", x, y, z);

	return 0;
}
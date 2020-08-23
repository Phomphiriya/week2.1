#include<stdio.h>
int main() {
	int x, y,sum1;
	scanf_s("%d",&x);
	sum1 = 0;
	for (y = 1; y <= x; y++) 
	{
		
		if (y == x)
		{
			printf("%d", y);
		}
		else 
		{
			printf("%d", y);
			printf("+");
		}

		sum1 = sum1 + y;
	}
	printf("\n%d", sum1);

	return 0;
}
#include<stdio.h>
int main() {
	int num1, num2, num3, max;

	printf("input num1 : ");
	scanf("%d", &num1);
	printf("input num2 : ");
	scanf("%d", &num2);
	printf("input num3 : ");
	scanf("%d", &num3);

	if (num1 > num2) {
		max = num1;
		if (num1 > num3)
			max = num1;
		else
			max = num3;
	}
	else
	{ //num2>num1
		if (num2 > num3)
			max = num2;
		else
			max = num3;
	}

	printf("max=%d", max);
	getch();
	return 0;
}

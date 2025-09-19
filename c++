#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("nhap a");
	scanf_s("%d", &a);
	printf("nhap b");
	scanf_s("%d", &b);
	a++;
	a = a + b--;
	a = a + (--b);
	if (a % 2 == 0)
		printf("gia tri a la chan\n");
	printf("tong cua a va b là: %d", a + b);
	_getch();
}

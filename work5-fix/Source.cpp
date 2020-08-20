#include <stdio.h>
int A, B, start;
int gcd(int A, int B);
int gcd(int A,int B)
{
	printf("Enter two positive intergers: ");
	if (A < B)
	{
		start = A;
	}
	else  {
		start = B;
	}

	while (((A % start) != 0) || ((B % start) != 0))
	{
		start = start - 1;
	}
	printf("The g.c.d of %d and %d is %d", A, B, start);
	return start;
}
int main() {
	scanf_s("%d", &A);
	scanf_s("%d", &B);
	gcd(A, B);
}
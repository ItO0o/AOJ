#include <stdio.h>

int main(int argc, char *argv[])
{
	int num, cnt = 0, n = 0;
	// char c, dummy;

	scanf("%d", &n);
	// scanf("%c", &dummy);

	int A[10][3], B[10][3], C[10][3], D[10][3];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = 0;
			B[i][j] = 0;
			C[i][j] = 0;
			D[i][j] = 0;
		}
	}
	cnt = 0;
	int b, f, r, v;
	while (cnt < n)
	{
		scanf("%d %d %d %d", &b, &f, &r, &v);
		// printf("%d %d %d %d\n", b, f, r, v);
		r --;
		f --;
		if (b == 1)
		{
			A[r][f] += v;
		}
		if (b == 2)
		{
			B[r][f] += v;
		}
		if (b == 3)
		{
			C[r][f] += v;
		}
		if (b == 4)
		{
			D[r][f] += v;
		}
		cnt++;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d", A[j][i]);
		}
		printf("\n");
	}

	printf("####################\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d", B[j][i]);
		}
		printf("\n");
	}
	printf("####################\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d", C[j][i]);
		}
		printf("\n");
	}
	printf("####################\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf(" %d", D[j][i]);
		}
		printf("\n");
	}
	return 0;
}

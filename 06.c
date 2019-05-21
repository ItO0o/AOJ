#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	int a[n];
	int tmp, cnt = 0;
	while (cnt < n)
	{
		scanf("%d", &tmp);
		a[cnt] = tmp;
		cnt++;
	}

	if (n % 2 == 0)
	{
		cnt = 0;
		while (cnt < n / 2)
		{
			int tmpNum = a[cnt];
			a[cnt] = a[n - cnt - 1];
			a[n - cnt - 1] = tmpNum;
			cnt++;
		}
	}
	else
	{
		cnt = 0;
		while (cnt < n / 2)
		{
			int tmpNum = a[cnt];
			a[cnt] = a[n - cnt - 1];
			a[n - cnt - 1] = tmpNum;
			cnt++;
		}
	}

	cnt = 0;
	while (cnt < n)
	{
		printf("%d", a[cnt]);
		cnt++;
		if (cnt < n)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}

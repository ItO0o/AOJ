#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	char dm;
	scanf("%c", &dm);
	int A[n][m];
	int b[m];
	int sum[n];
	int cnt = 0, cnt2 = 0;
	int num;
	char tmp;

	while ((tmp = getchar()) != EOF)
	{
		printf("%c", tmp);
		if (n == cnt2 && tmp == '\n')
		{
			break;
		}

		if (tmp == ' ')
		{
			continue;
		}
		else if (tmp == '\n')
		{
			cnt2++;
			cnt = 0;
			continue;
		}
		else
		{
			// printf("(%d,%d) ", cnt, cnt2);
			num = (int)tmp - 48;
			A[cnt2][cnt] = num;
			cnt++;
		}
	}

	// for (int i = 0; i < m; i++)
	// {
	// 	scanf("%d", &b[i]);
	// 	printf("%d",b[i]);
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 	{
	// 		int num;
	// 		tmp = getchar();
	// 		A[i][j] = num;
	// 	}
	// }
	// printf("\n");
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j < m; j++)
	// 	{
	// 		sum[i] += A[i][j] * b[j];
	// 	}
	// 	printf("\n");
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	printf("%d\n",sum[i]);
	// }

	return 0;
}

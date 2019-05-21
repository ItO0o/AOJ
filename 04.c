#include <stdio.h>

int main(int argc, char *argv[])
{
	int H, W;
	int a = 1;
	int tmp = 0;

	while (1)
	{
		scanf("%d %d", &H, &W);
		if (H == 0 && W == 0)
		{
			break;
		}
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (i % 2 == 0 && j % 2 == 0)
				{
					printf("#");
				}
				else if (i % 2 == 1 && j % 2 == 0)
				{
					printf(".");
				}
				else if (i % 2 == 0 && j % 2 == 1)
				{
					printf(".");
				}
				else if (i % 2 == 1 && j % 2 == 1)
				{
					printf("#");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

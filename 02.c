#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	char op;
	while (1)
	{
		scanf("%d %c %d\n", &a, &op, &b);

		if (op == '?')
		{
			break;
		}
		else if (op == '+')
		{
			printf("%d\n", a + b);
		}
		else if (op == '-')
		{
			printf("%d\n", a - b);
		}
		else if (op == '*')
		{
			printf("%d\n", a * b);
		}
		else if (op == '/')
		{
			printf("%d\n", a / b);
		}
	}

	return 0;
}

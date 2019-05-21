#include <stdio.h>

int main(int argc, char *argv[])
{
	long int sum = 0;
	int cnt, a;

	scanf("%d", &cnt);
	int max = -1000000, min = 1000000;
	for (int i = 0; i < cnt; i++)
	{
		if(i == cnt-1){
			scanf("%d", &a);
		}else{
		scanf("%d ", &a);
		}
		if(max <= a){
			max = a;
		}
		if(min >= a){
			min = a;
		}
		sum += a;
	}
	printf("%d %d %ld\n",min,max,sum);
	return 0;
}

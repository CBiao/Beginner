#include <stdio.h>

int main()
{
	int n;
	int i, j;
	printf("Please input a number to output triangle stars for specific lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=2*i-1;j++)
			printf("* ");
		printf("\n");
	}
    printf("Please input another number to output triangle stars for specific lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=2*i-1;j++)
			printf("* ");
		printf("\n");
	}
	for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf("  ");
        for(j=1;j<=2*(n-i)-1;j++)
			printf("* ");
		printf("\n");
    }
	return 0;
}

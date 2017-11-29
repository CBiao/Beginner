#include <stdio.h>

void input(int a[][4])
{
	int i, j;
	for(i=0;i<30;i++){
		for(j=0;j<4;j++){
			scanf("%d", &a[i][j]);
		}
	}
}

void output(int a[][4], int b[], double c[])
{
	int i, j;
	printf("                sub1   sub2   sub3   sub4\n\n");
	for(i=0;i<30;i++){
		printf("student #%02d:", i+1);
		for(j=0;j<4;j++){
			printf("%7d", a[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	printf("total scores:\n");
	for(i=0;i<30;i++){
		printf("student #%02d:%4d\n", i+1, b[i]);
	}
	putchar('\n');
    printf("sub average:\n");
	for(i=0;i<4;i++){
		printf("sub #%d:%6.2f\n", i+1, c[i]);
	}
}

void process(int a[][4], int b[], double c[])
{
	int i, j;
	for(i=0;i<30;i++){
		b[i] = 0;
		for(j=0;j<4;j++){
			b[i] += a[i][j];
		}
	}
	for(i=0;i<4;i++){
		c[i] = 0;
		for(j=0;j<30;j++){
			c[i] += a[j][i];
		}
		c[i] /= 30;
	}
}

int main()
{
	int a[30][4], b[30];
	double c[4];
	input(a);
	process(a, b, c);
	output(a, b, c);
	return 0;
}

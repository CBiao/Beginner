#include <stdio.h>
#include <string.h>
int queensets;
void pr(int a[][8])
{
	int i, j;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(a[i][j])	printf("1 ");
			else	printf("0 ");
		}
		printf("\n");
	}
	printf("\n\n");
	queensets++;
}

int match(int a[][8], int  h, int l)
{
	int i, j;
	for(i=0;i<h;i++){
		if(a[i][l])	return 0;
	}
	for(i=h-1,j=l-1;i>=0&&j>=0;i--, j--){
		if(a[i][j])	return 0;
	}
	for(i=h-1,j=l+1;i>=0&&j<8;i--, j++){
		if(a[i][j])	return 0;
	}
	return 1;
}

void eq(int a[][8], int i)
{
	if(i==8){
		pr(a);
		return;
	}
	int j;
	for(j=0;j<8;j++){
		if(match(a, i, j)){
			a[i][j] = 1;
			eq(a, i+1);
			a[i][j] = 0;
		}
	}
}

int main()
{
	int a[8][8];
	memset(a, 0, sizeof(a));
	eq(a, 0);
	printf("diffsets:%d\n", queensets);
	return 0;
}

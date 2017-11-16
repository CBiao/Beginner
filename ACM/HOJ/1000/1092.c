//A+B for Input-Output Practice (IV)
#include <stdio.h>

int main()	//much better
{
	int num, sum, n;
	while(scanf("%d",&n)!=EOF&&n){
        sum = 0;
		while(n){
			scanf("%d", &num);
			sum+=num;
			n--;
		}
		printf("%d\n", sum);
	}
	return 0;
}

/*int main()
{
	int num, sum, i, n;
	while(scanf("%d",&n)!=EOF&&n){
		sum = 0;
		for(i=0; i<n; i++){s
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int i, j;
	int n = 0;
	for(i=1;i<1000;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
				n+=j;
			}
		}
		i==n?printf("完数：%d\n",i):0;
		n = 0;
	}
	return 0;
}

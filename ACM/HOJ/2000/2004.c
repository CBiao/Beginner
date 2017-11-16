//成绩转换
//EOF的用处
//ctrl+z能使scanf返回-1；
#include <stdio.h>

int main()
{
	int t, a;
	while(scanf("%d", &t)!=EOF){

		if(t>100||t<0){
			printf("Score is error!\n");
		}
		else{
            switch (t/10) {
                case 10:	;
                case 9:		printf("A\n"); break;
                case 8:		printf("B\n"); break;
                case 7:		printf("C\n"); break;
                case 6:		printf("D\n"); break;
                default: printf("E\n");
            }
		}
        getchar();
	}
	return 0;
}

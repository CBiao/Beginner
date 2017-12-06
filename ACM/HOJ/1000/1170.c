//Balloon Comes!
#include <stdio.h>
#include <math.h>
int main()
{
	int t, a, b;
	char c;
	scanf("%d", &t);
	while(t--){
        getchar();
		scanf("%c %d %d", &c, &a, &b);
		switch(c){
			case '+':printf("%d\n", a+b);break;
			case '-':printf("%d\n", a-b);break;
			case '*':printf("%d\n", a*b);break;
			case '/':{
                        if(fabs((double)a/b-a/b)<1e-8)printf("%d\n", a/b);
                        else   printf("%.2f\n", (double)a/b);
                        break;
                     }

		}
	}
	return 0;
}

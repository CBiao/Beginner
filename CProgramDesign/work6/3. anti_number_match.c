#include <stdio.h>

int main()
{
	int i, k=0;
	for(i=1000;i<=9999;i++)
    {
        if(i==i%10*1000+i/10%10*100+i/100%10*10+i/1000)
        {
            k++;
            printf("%d",i);
            k%8==0?printf("\n"):printf(" ");
        }
    }

	return 0;
}

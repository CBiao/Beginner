#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int a[10];
    int n;
    int i;
    int max=0, min=99;
    double sum = 0;
    double ave = 0;
    srand(time(0));
    printf("Please enter a number n to generate random numbers\n");
    printf("n less then 10, random numbers less then 100\n");
    //生成不多于十个的100以内整数 
    scanf("%d", &n);	
	for (i=0; i<n; i++)
    {
        a[i] = rand()%100;
        printf("%d\n", a[i]);
        sum = sum + a[i];
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    ave = sum/n;
    printf("number_max=%d\n", max);
    printf("number_min=%d\n", min);
    printf("average=%f\n", ave);
    return 0;
}

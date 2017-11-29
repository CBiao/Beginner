#include <stdio.h>
#include <time.h>
int main()
{
    int i, j, k, flag;
    int a[10];
    for(i=100;i<400;i++){
        a[1] = i/100;
        a[2] = i/10%10;
        a[3] = i%10;
        a[4] = 2*i/100;
        a[5] = 2*i/10%10;
        a[6] = 2*i%10;
        a[7] = 3*i/100;
        a[8] = 3*i/10%10;
        a[9] = 3*i%10;
        for(j=1;j<=9;j++){
            flag = 0;
            for(k=1;k<=9;k++){
                if(j==a[k]){
                    flag = 1;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag)    printf("%d %d %d\n", i, 2*i, 3*i);
    }
    printf("TIME:%.5f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}

//绝对值排序
#include <stdio.h>
#include <math.h>

int main()
{
    int a[100] = {0}, b[100] = {0};
    int n, i, j, t;
    while(scanf("%d", &n)==1&&n){
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
            b[i] = a[i];
            a[i] = fabs(a[i]);
        }
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){
                if(a[j]<a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                    t = b[j];
                    b[j] = b[j+1];
                    b[j+1] = t;
                }
            }
        }
        for(i=0;i<n-1;i++) printf("%d ", b[i]);
        printf("%d\n", b[i]);
    }
    return 0;
}

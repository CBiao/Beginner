//人见人爱A-B
#include <stdio.h>

int main()
{
	int n, m, i, j, t, flag;
	int a[100], b[100], c[100];
	while(scanf("%d %d", &n, &m)==2&&(n||m)){
		flag = 0;
		for(i=0;i<n;i++){
			scanf("%d", &a[i]);
			c[i] = 1;
		}
		for(i=0;i<m;i++){
			scanf("%d", &b[i]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j]){
					c[i] = 0;
					flag++;
					break;
				}
			}
		}
		if(flag==n){
			printf("NULL\n");
		}
		else{
			for(i=0;i<n;i++){
				if(c[i]){
					printf("%d ", a[i]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}





//准备重写 睡觉 11/23 00点37分
//双双晚安
#include <stdio.h>

int main()
{
	int n, m, i, j, t, head, tail, mid, flag;
	int a[100], b[100], c[100];
	while(scanf("%d %d", &n, &m)==2&&(n||m)){
		for(i=0;i<n;i++){
			scanf("%d", &a[i]);
			c[i] = 1;
		}
		for(i=0;i<m;i++){
			scanf("%d", &b[i]);
		}
		for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }
		}
		for(i=0;i<m-1;i++){
			for(j=0;j<m-i-1;j++){
				if(b[j]>b[j+1]){
					t = b[j];
					b[j] = b[j+1];
					b[j+1] = t;
				}
			}
		}
		flag = 0;
		if(m){
            for(i=0;i<n;i++){
                for(head=0,tail=m;head<=tail;){
                    mid = (head+tail)/2;
                    if(a[i]>b[mid])	head = mid+1;
                    else if(a[i]<b[mid])	tail = mid-1;
                    else{
                        c[i] = 0;
                        flag++;
                        break;
                    }
                }
            }
		}
		if(flag==n)	printf("NUll\n");
		if(flag!=n){
            for(i=0;i<n;i++){
                if(c[i]){
                    printf("%d ", a[i]);
                }
			}
			printf("\n");
		}
	}
	return 0;
}

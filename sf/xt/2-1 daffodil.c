#include <stdio.h>
int main()
{
	int i, b, s, g;
	for(i=100;i<1000;i++){
		g = i%10;
		s = i%100/10;
		b = i/100;
		if(i==g*g*g+s*s*s+b*b*b){
            printf("%d\n", i);
		}
	}
	return 0;
}

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int i, j, k;
// 	for(i=1;i<=9;i++){
//         for(j=0;j<=9;j++){
//             for(k=0;k<=9;k++){
//                 if(i*i*i+j*j*j+k*k*k==i*100+j*10+k){
//                     printf("%d\n", i*100+j*10+k);
//                 }
//             }
//         }
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int i, b, s, g;
// 	for(i=100;i<1000;i++){
// 		g = i%10;
// 		s = i%100/10;
// 		b = i/100;
// 		if(fabs(i-(pow(g, 3)+pow(s, 3)+pow(b, 3)))<1e-6){
//             printf("%d\n", i);
// 		}
// 	}
// 	return 0;
// }

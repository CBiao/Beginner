#include <stdio.h>
#include <math.h>
double max(double a, double b)
{
	return a>b?a:b;
}

double min(double a, double b)
{
	return a<b?a:b;
}

double ch(double a, double b, double c, double d)
{
	if(a<=c&&b>=d)	return d-c;
	if(c<=a&&d>=b)	return b-a;
	if(a<=c&&c<=b&&b<=d)	return b-c;
	if(c<=a&&a<=d&&d<=b)	return a-d;
	return 0;
}
int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4, x, y;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)==8){
		x = ch(min(x1, x2), max(x1, x2), min(x3, x4), max(x3, x4));
		y = ch(min(y1, y2), max(y1, y2), min(y3, y4), max(y3, y4));
		printf("%.2f\n", fabs(x*y));
	}
	return 0;
}




// //错了
// #include <stdio.h>
// int main()
// {
// 	double x1, y1, x2, y2, x3, y3, x4, y4, xs, xx, ys, yx;
// 	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)==8){
// 		if((x1>x2?x1:x2)>(x3>x4?x4:x3)&&(x1>x2?x1:x2)<(x3<x4?x4:x3)){
// 			xs = x1>x2?x1:x2;
// 			xx = x3>x4?x4:x3;
// 		}
// 		else if((x3>x4?x4:x3)>(x1<x2?x1:x2)&&(x3>x4?x4:x3)<(x1>x2?x1:x2)){
// 			xs = x3<x4?x4:x3;
// 			xx = x1<x2?x1:x2;
// 		}
// 		else{
//             printf("0.00\n");
//             continue;
// 		}
// 		if((y1>y2?y1:y2)>(y3>y4?y4:y3)&&(y1>y2?y1:y2)<(y3<y4?y4:y3)){
// 			ys = y1>y2?y1:y2;
// 			yx = y3>y4?y4:y3;
// 		}
// 		else if((y3>y4?y4:y3)>(y1<y2?y1:y2)&&(y3>y4?y4:y3)<(y1>y2?y1:y2)){
// 			ys = y3<y4?y4:y3;
// 			yx = y1<y2?y1:y2;
// 		}
// 		else{
//             printf("0.00\n");
//             continue;
// 		}
// 		printf("%.2f\n", (xs-xx)*(ys-yx));
// 	}
// 	return 0;
// }

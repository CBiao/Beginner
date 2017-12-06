//A == B ?
//这TM就ac了？？？？？
#include <stdio.h>
#include <string.h>
int zs(char a[]);
void re(char a[]);
char a[1000000], b[1000000];
int main()
{
	while(scanf("%s %s", a, b)==2){
		re(a);
		re(b);
		if(!strcmp(a, b))	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

void re(char a[])
{
	if(zs(a))	return;
	int len = strlen(a), i;
	for(i=len-1;i>=0;i--){
		if(a[i]!='0'){
			a[i+1] = '\0';
			return;
		}
	}

}

int zs(char a[])
{
	if(strchr(a, '.')==NULL) return 1;
	int i, j;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='.'){
			for(j=i+1;a[j]!='\0';j++){
				if(a[j]!='0') return 0;
			}
			a[i] = '\0';
            break;
		}
	}
	return 1;
}






//解决+ -问题仍然WA
//A == B ?
#include <stdio.h>
#include <string.h>
void re(char a[]);
void mo(char a[]);
char a[1000000], b[1000000];
int main()
{
	while(scanf("%s %s", a, b)==2){
		if(!strcmp(a, b))	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}


void re(char a[])
{
    if(a[0]=='+')   mo(a);
	int len = strlen(a), i;
	for(i=len-1;i>=0;i--){
		if(a[i]!='0'){
            if(a[i]=='.')   a[i] = '\0';
			else a[i+1] = '\0';
			return ;
		}
	}
	a[1] = '\0';
}

void mo(char a[])
{
    int i;
    for(i=1;a[i]!='\0';i++){
        a[i-1] = a[i];
    }
    a[i-1] = '\0';
}



//解决10.0和10问题
#include <stdio.h>
#include <string.h>
void re(char a[]);
int compare(char a[], char b[]);
char a[1000000], b[1000000];
int main()
{
	while(scanf("%s %s", a, b)==2){
		re(a);
		re(b);
		if(compare(a, b))	printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

int compare(char a[], char b[])
{
	int lena = strlen(a), lenb = strlen(b), i;
	if(lena==lenb){
		for(i=0;i<lena;i++){
			if(a[i]!=b[i])	return 0;
		}
	}
	else return 0;
	return 1;
}

void re(char a[])
{
	int len = strlen(a), i;
	for(i=len-1;i>=0;i--){
		if(a[i]!='0'){
            if(a[i]=='.')   a[i] = '\0';
			else a[i+1] = '\0';
			return ;
		}
	}
	a[1] = '\0';
}




// #include <string.h>
// #include <stdio.h>
// char a[1000000], b[1000000];
//
// void qhd(char a[])
// {
// 	int l = strlen(a);
// 	while(l--){
// 		if(a[l]=='0'||a[l]=='.')	a[l] = '\0';
// 		else break;
// 	}
// }
//
// int main()
// {
// 	int i, t;
// 	while(scanf("%s %s", a, b)==2){
// 		t = 1;
// 		qhd(a);
// 		qhd(b);
// 		for(i=0;!(a[i]=='\0'&&b[i]=='\0');i++){
// 			if(a[i]!=b[i]){
// 				t = 0;
// 				break;
// 			}
// 		}
// 		if(t) printf("YES\n");
// 		else printf("NO\n");
// 	}
// 	return 0;
// }
//
//
//
// //WA
// #include <stdio.h>
// #include <string.h>
// char a[1000000], b[1000000];
// int main()
// {
// 	int ha, ta, hb, tb, la, lb, i, j, flag;
// 	while(scanf("%s %s", a, b)==2){
// 		ha = hb = ta = tb = '0';
// 		la = strlen(a);
// 		lb = strlen(b);
// 		for(i=0;i<la;i++){
// 			if(a[i]!='0'){
// 				ha = i;
// 				break;
// 			}
// 		}
// 		for(i=0;i<lb;i++){
// 			if(b[i]!='0'){
// 				hb = i;
// 				break;
// 			}
// 		}
// 		for(i=la-1;i>=0;i--){
// 			if(a[i]!='0'){
// 				ta = i;
// 				break;
// 			}
// 		}
// 		for(i=lb-1;i>=0;i--){
// 			if(b[i]!='0'){
// 				tb = i;
// 				break;
// 			}
// 		}
// 		flag = 1;
// 		if(ha-ta==hb-tb){
// 			for(i=ha, j=hb;i<=ta;i++,j++){
// 				if(a[i]!=b[j]){
// 					printf("NO\n");
// 					flag = 0;
// 					break;
// 				}
// 			}
// 			if(flag)	printf("YES\n");
// 		}
// 		else{
// 			printf("NO\n");
// 		}
// 	}
// 	return 0;
// }
//
//
// //WA
// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	double a, b;
// 	while(scanf("%lf %lf", &a, &b)==2){
// 		if(fabs(a-b)<1e-14){
// 			printf("YES\n");
// 		}
// 		else{
// 			printf("NO\n");
// 		}
// 	}
// 	return 0;
// }

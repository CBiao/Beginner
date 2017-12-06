//Palindromes, UVa401

//作者版本
#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};

char r(char ch)
{
		if(isalpha(ch))	return rev[ch-'A'];
		return rev[ch-'0'+25];
}


int main()
{
	char s[30];
	int m, p, i, len;
	while(scanf("%s", s)==1){
		m = p = 1;
		len = strlen(s);
		for(i=0;(m||p)&&i<=len-1-i;i++){
			if(p&&s[i]!=s[len-1-i]){
				p = 0;
			}
			if(m&&r(s[i]) != s[len-1-i]){
				m = 0;
			}
		}
		printf("%s -- is %s\n\n", s, msg[2*m+p]);
	}
	return 0;
}



//0 error(s), 0 warning(s)
#include <stdio.h>
#include <string.h>

int main()
{
	char s[30], a[] = "AEHIJLMOSTUVWXYZ12358", b[] = "A3HILJMO2TUVWXY51SEZ8";
	int len, i, j, k, jxc, hwc;
	while(scanf("%s", s) == 1){
		len = strlen(s);
		hwc = 1;
		for(i=0, j=len-1;i<=j;i++,j--){
			if(s[i]!=s[j]){
				hwc = 0;
				break;
			}
		}
		jxc = 1;
		for(i=0, j=len-1;i<=j;i++,j--){
			for(k=0;a[k]!='\0';k++){
				if(a[k]==s[i]){
					if(s[j]!=b[k]){
						jxc = 0;
						break;
					}
				}
			}
			if(!jxc)	break;
		}
		if(jxc&&hwc){
			printf("%s -- is a mirrored palindrome\n\n", s);
		}
		else if(jxc==0&&hwc){
			printf("%s -- is a regular palindrome\n\n", s);
		}
		else if(jxc&&hwc==0){
			printf("%s -- is a mirrored string\n\n", s);
		}
		else{
			printf("%s -- is not a palindrome\n\n", s);
		}
	}
	return 0;
}

//The Hardest Problem Ever
#include <stdio.h>
#include <string.h>

int main()
{
	char code[1000], s[10], e[10];
	int i, j;
	for(j=0; j<=100; j++){
        gets(s);
        if(!strcmp(s, "START")){
            gets(code);
            for(i=0; code[i]!='\0'; i++){
                if(code[i]>='A' && code[i]<='Z'){
                    code[i] = (code[i]-65+21)%26+65;
                }
            }
        gets(e);
            if(!strcmp(e, "END")){
                    puts(code);
                }
            }
        if(!strcmp(s, "ENDOFINPUT")){
            break;
        }
	}
    return 0;
}

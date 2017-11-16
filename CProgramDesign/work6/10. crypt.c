#include <stdio.h>

void cho(int n);
void encrypt();
void decrypt();
char ch(int n);
int number(int n);

int main()
{
    int choose;
    do
    {
        system("cls");
        printf("Please choose:\nencrypt--1\ndecrypt--2\nexit-----3\n");
        scanf("%d",&choose);
        cho(choose);
        printf("\n\nPress anykey to continue......");
        getchar();
    }while(choose==1||choose==2);
    return 0;
}

void cho(int n)
{
    switch(n)
    {
        case 1:encrypt();break;
        case 2:decrypt();break;
        case 3:printf("Thanks for using!");break;
        default:printf("Error in date inputing!\nExit the program.");break;

    }
}

void encrypt()
{
    int i;
    char text[100];
    printf("Please input the plaintext:\n");
    getchar();
    gets(text);
    for(i=0;text[i]!='\0';i++)
    {
        if(text[i]>='A'&&text[i]<='z')
        text[i]=ch(number(text[i])*3%52);
    }

    printf("ciphertext:%s\n",text);
}

void decrypt()
{
    printf("我不会");
    getchar();
}

int number(int n)
{
    if(n>='a'&&n<='z')
        return n-'a'+1;
    return n-'A'+27;
}

char ch(int n)
{
    if(n>=1&&n<=26)
        return 'a'+n-1;
    else
        return 'A'+n-1;
}

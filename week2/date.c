#include <stdio.h>

int main()
{
    int year, month, day;
    printf("Please enter a date in the form of \"xxxx��xx��xx��\"\n");
    scanf("%d��%d��%d��", &year, &month, &day);
    printf("%4d-%02d-%02d\n", year, month, day);
    return 0;
}

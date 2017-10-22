#include <stdio.h>

int main()
{
    int year, month, day;
    printf("Please enter a date in the form of \"xxxx年xx月xx日\"\n");
    scanf("%d年%d月%d日", &year, &month, &day);
    printf("%4d-%02d-%02d\n", year, month, day);
    return 0;
}

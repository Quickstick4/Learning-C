#include <stdio.h>

//Written as part of a lesson learning C

int main()
{
    int year;
    printf("\nEnter the year:  ");
    scanf("%d", &year);

    if ((year%4 == 0 && year%100 != 0) || (year%400==0))
    {
        printf("Good Year\n");
    }

    return 0;
}
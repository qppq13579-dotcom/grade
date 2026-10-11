#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year;
    int days;

    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        days = 29;
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        days = 29;
    }
    else {
        days = 28;
    }

    printf("%d년 2월은 %d일까지입니다.\n", year, days);

    return 0;
}

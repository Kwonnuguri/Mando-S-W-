#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income) 
{
    int tax = 0;

    if (income > 10000000) 
    {
        tax = 10000000 * 0.08 + (income - 10000000) * 0.1;
    }
    else 
    {
        tax = income * 0.08;
    }

    return tax;
}

int main() 
{
    int income;

    printf("소득을 입력하시오(만원): ");
    scanf("%d", &income);

    int tax = get_tax(income);

    printf("소득세: %d 만원입니다.\n", tax);

    return 0;
}

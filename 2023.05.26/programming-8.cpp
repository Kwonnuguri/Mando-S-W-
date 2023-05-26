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

    printf("�ҵ��� �Է��Ͻÿ�(����): ");
    scanf("%d", &income);

    int tax = get_tax(income);

    printf("�ҵ漼: %d �����Դϴ�.\n", tax);

    return 0;
}

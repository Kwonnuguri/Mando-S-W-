#include <stdio.h>

int main() {
    int year = 2023; // ����� ����
    int month = 4; // ����� ��

    // �� ���� �� ���� ������ �迭
    int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // ������ ��� 2���� �� ���� 29�Ϸ� ����
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[2] = 29;
    }

    // �ش� ���� ù ��° ���� ������ ���
    int first_day_of_month = (year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 8) / 5 + 1) % 7;

    // �޷� ���
    printf("      %d�� %d��\n", year, month);
    printf(" ��  ��  ȭ  ��  ��  ��  ��\n");

    // ù° �ֿ� ���� ���
    for (int i = 0; i < first_day_of_month; i++) {
        printf("    ");
    }

    // �ش� ���� ��¥ ���
    for (int i = 1; i <= days_in_month[month]; i++) {
        printf("%3d ", i);

        // �ٹٲ�
        if ((first_day_of_month + i) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
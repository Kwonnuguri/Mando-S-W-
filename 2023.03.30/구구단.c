#include <stdio.h>

int main() {
    int year = 2023; // 출력할 연도
    int month = 4; // 출력할 달

    // 각 월의 날 수를 저장한 배열
    int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // 윤년인 경우 2월의 날 수를 29일로 변경
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[2] = 29;
    }

    // 해당 달의 첫 번째 날의 요일을 계산
    int first_day_of_month = (year + (year / 4) - (year / 100) + (year / 400) + (13 * month + 8) / 5 + 1) % 7;

    // 달력 출력
    printf("      %d년 %d월\n", year, month);
    printf(" 일  월  화  수  목  금  토\n");

    // 첫째 주에 공백 출력
    for (int i = 0; i < first_day_of_month; i++) {
        printf("    ");
    }

    // 해당 달의 날짜 출력
    for (int i = 1; i <= days_in_month[month]; i++) {
        printf("%3d ", i);

        // 줄바꿈
        if ((first_day_of_month + i) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
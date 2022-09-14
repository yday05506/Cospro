#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) {
    int min_cal = calorie[0];
    int answer = 0;
    for (int i = 0; i < calorie_len; i++) {
        if (calorie[i] > min_cal)
            answer += calorie[i] - min_cal;
        else
            min_cal = calorie[i];
    }
    return answer;
}

int main() {
    int calorie[] = { 713, 665, 873, 500, 751 };
    int ret = solution(calorie, 5);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
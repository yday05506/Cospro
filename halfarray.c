#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = 1;
    for (int i = 0; i < arr_len; i++)
        for (int j = 0; j < arr_len; j++)
            if (arr[i] % 2 == 0 && arr[j] / 2 == arr[i]) {
                answer++;
                continue;
            }
    return answer;
}

int main() {
    int arr[] = { 4, 8, 3, 6, 3 };
    int arr_len = 5;
    int ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
#include <stdio.h>
#include <string.h>


int main(void) {
	// s1���� ������ �ִ��� �˻��ϰ�, �ִٸ� �� ��°���� ��ȯ�ϴ� ���α׷�
	// �̶� ������ ���� �� �ִٸ� ��� �˻�
	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����" };
	char key[] = { "����" };
	int i, j;
	// int len = strlen(s1);

	for (i = 0; i < 7; i++) {
		printf("%s\n", s1[i]);
		if (strcmp(key, s1[i]) == 0) {
			printf("�迭 �� ���� ��ġ : %d��°\n", i + 1);
		}
	}

	return 0;
}
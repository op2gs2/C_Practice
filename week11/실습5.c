/*
�ǽ� 5
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �迭�� ���� ū ���� �޸� �ּ� ��ȯ
*/

#include <stdio.h>

int* find_max(int* ptr); //�Լ��� ����

int main(void) {
	int arr[] = { 12,22,4,54,17,1,19,44,29,37 }; //�迭 ����
	int *result = NULL; //��ȯ�� ���� ������ �Լ�
	result = find_max(&arr); //�Լ� ȣ��

	printf("���� ū ���� �ּ� ��: %#p\n", result);
	return 0;
}

int* find_max(int* ptr) {
	int i, max=-123; //���� ����. �����, ū ���� �ε��� ����
	for (i = 0; i < 10; i++) { //�迭 Ƚ����ŭ iteration
		if (ptr[i] > max) { //���� ���� max���� ũ��
			max = i; //�ε��� ����
		}
	}

	return (ptr + max); //�⺻ ��ġ + �ε��� ��ġ ��ȯ
}

/*
�ǽ�3
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: ������ �迭�� �ٸ� �Լ��� ������ ����ϴ� ���α׷�
*/

#include <stdio.h>

void printarraay(int(*array)[4]);

int main(void) {
	int array[][4] = { {1,2,3,4},{5,6,7,8} }; //�迭 ����

	printarraay(array); //�Լ� ȣ��

	return 0; //���α׷��� ����
}

void printarraay(int (*array)[4]) {
	printf_s("�迭 ���� ���: \t\n");
	int i, j;
	for (j = 0; j < 2; j++) { //������ ����
		for (i = 0; i < 4; i++) { //���� �� �迭 ���� ����
			printf("%d\t", (*array)[i]); //���
		}
		printf("\n");
		array++; //������ ����
	}
	
}
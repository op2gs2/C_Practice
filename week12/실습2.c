/*
�ǽ�2
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: �迭�� ���Ұ� -1�� �ɶ� ���� ����ϴ� ���α׷�
*/

#include <stdio.h>

void printarraay(int *ptr_arr);

int main(void) {
	int array[10] = { 1,2,3,4,5,-1,7,8,9,10 }; //�迭 ����

	printarraay(array); //�Լ� ȣ��

	return 0; //���α׷��� ����
}

void printarraay(int *ptr_arr) {
	printf_s("�迭 ���� ���: \t");
	while (*ptr_arr != -1) { //�迭�� ���Ұ� -1�� �ƴϸ�
		printf_s("%d\t", *(ptr_arr++)); //������ �����
	}
}
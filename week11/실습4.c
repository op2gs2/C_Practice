/*
�ǽ� 4
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �����͸� �̿���, ������ �ѱ�� ������ ���� �ٲٴ� �Լ�
*/

#include <stdio.h>

void swap(int*, int*); //�Լ��� ����

int main(void) {
	int num1=10, num2=30; //���� ���� �� �ʱ�ȭ
	printf("ù��° ����: %d   �ι�° ����: %d\n", num1, num2);
	swap(&num1, &num2); //�Լ� ȣ��

	printf("ù��° ����: %d   �ι�° ����: %d\n", num1, num2);
	return 0;
}

void swap(int *temp1, int *temp2) {
	int swap_temp = *temp1; //�ӽ� ����
	//swap ����
	*temp1 = *temp2;
	*temp2 = swap_temp;
}
/*
�ǽ� 3
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: ���� ���� �� �ּ� ���
*/

#include <stdio.h>

void print_address(int*, double*, char*);

int main(void) {
	int num1 = 0; double num2 = 0; char num3 = 0; //���� ����

	print_address(&num1, &num2, &num3); //�Լ� ȣ��
	return 0;
}

void print_address(int* temp1, double*temp2, char*temp3) {
	//�ּ� ���� �޾� ���
	printf("������: %#p\n", temp1);
	printf("�Ǽ���: %#p\n", temp2);
	printf("������: %#p\n", temp3);
}
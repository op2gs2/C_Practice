/*
�ǽ�5
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: �Լ� �����͸� �̿��� �Լ��� �����ϴ� ���α׷�
*/

#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void div(int num1, int num2);

int main(void) {
	void(*fun)(int, int) = NULL; //�Լ� ������ ���� �� �ʱ�ȭ
	int menu; //�޴� �� ���� ����
	int num1, num2; //�� ���� ����

	printf_s("1�� ��, 2�� ��, 3�� ��, 4�� �������� ��: \t");
	scanf_s("%d", &menu); //�޴� �� �Է� �ޱ�

	printf_s("���� �Է��ϼ���");
	scanf_s("%d", &num1); //�� 1 �Է� �ޱ�
	printf_s("���� �Է��ϼ���");
	scanf_s("%d", &num2);//�� 2 �Է� �ޱ�

	switch (menu) {
		case 1: //���ϱ�
			fun = add;
			fun(num1, num2);
			break;

		case 2: //����
			fun = sub;
			fun(num1, num2);
			break;

		case 3: //���ϱ�
			fun = mul;
			fun(num1, num2);
			break;

		case 4: //������ (��)
			fun = div;
			fun(num1, num2);
			break;
	}

	return 0;
}

void add(int num1, int num2) { //���ϱ�
	printf("�����: %d", num1 + num2);
}
void sub(int num1, int num2) { //����
	printf("�����: %d", num1 - num2);
}
void mul(int num1, int num2) { //���ϱ�
	printf("�����: %d", num1 * num2);
}
void div(int num1, int num2) { //������
	printf("�����: %d", num1 / num2);
}
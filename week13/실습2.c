/*
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 29��
���α׷� ����: �ǽ� 1�� ��� �� ��� �κ��� �Լ��� �ۼ�
*/
#include <stdio.h>

typedef struct {
	int numerator; //���� �� ����
	int denominator; //�и� �� ����
}FRACTION;

void multiplication(FRACTION fr1, FRACTION fr2);



int main(void) {
	FRACTION fr1; //ù��° �м�
	FRACTION fr2; //�ι�° �м�
	FRACTION res; //��� ���� �м�

	/*�м��� �� �� �Է�*/
	printf_s("key first in the form of x/y: ");
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator); //ù��° �м� �� �Է�
	printf_s("key second in the form of x/y: ");
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator); //�ι�° �м� �� �Է�

	/*�м� ��� �� ����Լ�*/
	multiplication(fr1, fr2);
	
}

void multiplication(FRACTION fr1, FRACTION fr2) {
	FRACTION res; //��� �� ���� ����ü ����
	res.numerator = fr1.numerator * fr2.numerator; //���� �� ���
	res.denominator = fr1.denominator * fr2.denominator; //�и� �� ���

	/*��� ���*/
	printf_s("\n the result of %d/%d * %d/%d is %d/%d",
		fr1.numerator, fr1.denominator,
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);
}
/*
�ǽ�6
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: �����͸� �����ϴ� ���α׷�
*/

#include <stdio.h>

double* mul(double *ap, double *bp);

int main(void) {
	//���� ����
	double a, b; //���� �Է� �޴� ����
	double *res = NULL; // ����� ����Ű�� ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b); //���� �Է� �ޱ�
	res = mul(&a, &b); //��� ���� ����
	printf("�� ���� ���� : %.2lf\n", *res);
	return 0;
}

double* mul(double *ap, double *bp) {
	double rp; //����� ���� ����
	rp = *ap * *bp; //��� �� ����� ���� ������ ����
	return &rp; //��� �� ��ȯ
}
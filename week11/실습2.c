/*
�ǽ� 2
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �����͸� �̿��� ��ȯ
*/

#include <stdio.h>

double* mul(double *ap, double *bp);//�Լ��� ����

int main()
{
	double a, b; //���� ����
	double *res = NULL; //������ ���� ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b); //�� �Է�
	res = mul(&a, &b); //�Լ� �ּҸ� �����ͺ����� ����
	printf("�� ���� ���� : %.2lf\n", *res);
	return 0;
}
double* mul(double *ap, double *bp)
{
	double rp; //�� ���� ����
	rp = *ap * *bp;
	return &rp; //������ �ּ� �� ��ȯ
}
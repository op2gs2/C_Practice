/*
�ǽ� 1
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �����͸� �̿�, �ٸ� �Լ����� ���� ����
*/
#include <stdio.h>
void mul(double *, double *, double *); //�Լ��� ����

int main()
{
	double res, a, b; //���� ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b); //�� ������ �Է�
	mul(&res, &a, &b); //�Լ� ȣ��
	printf("�� ���� ���� : %.2lf\n", res);
	return 0;
}
void mul(double *rp, double *ap, double *bp)
{
	*rp = *ap * *bp; //�����͸� �̿��� ���
}
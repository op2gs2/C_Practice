/*
�ǽ�9
�ۼ���: �赿��
�ۼ���: 2018.11.07
���α׷� ����: �����͸� ���� �ϴ� �Լ� ����
*/

#include <stdio.h> //ǥ������¶��̺귯��

double* mul(double *ap, double *bp); //�Լ��� ����

int main(int argc, char*argv[]) {
	double a, b; //2���� double�� ���� ����
	double *res = NULL; //double�� ������ ���� ���� �� null�� ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b); //�Է��� ����
	res = mul(&a, &b); //���� ����� ��ȯ ����
	printf("�� ���� ���� : %.2lf\n", *res); //��� ���
	return 0;
}

double* mul(double *ap, double *bp) { //���� ���� �����ϰ� ����� �����ͷ� ������
	double rp; //���� ��� ���� ����
	rp = *ap * *bp; //�����͸� �̿��� ���� ������ ����
	return &rp; //�׸��� �ּҸ� ��ȯ��
}
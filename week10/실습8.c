/*
�ǽ�8
�ۼ���: �赿��
�ۼ���: 2018.11.07
���α׷� ����: ���� ���� ���� �����͸� �̿��ؼ� ��� ���� �����ϴ� ���
*/

#include <stdio.h> //ǥ������¶��̺귯��

void mul(double *, double *, double *); //�Լ��� ����

int main(int argc, char*argv[]) {
	double res, a, b; //3���� double�� ���� ����
	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%lf%lf", &a, &b); //�Է��� ����
	mul(&res, &a, &b); //���ϱ� ���� ������ res�� ����
	printf("�� ���� ���� : %.2lf\n", res);
	return 0;
}

void mul(double *rp, double *ap, double *bp) { //���ϱ� ������ �����ϴ� �Լ�
	*rp = *ap * *bp;
}

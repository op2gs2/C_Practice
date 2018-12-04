/*
�ǽ� 10
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �迭 ��ҿ� 2�� ���ϱ� �߿��� getData,printData�Լ� �����
*/

#include <stdio.h>
#define SIZE 5

/* �Լ��� ���� */
void multiply(int *pAry, int size);
void getData(int*, int*, int*);
void printData(int*, int*, int*);

int main(void)
{
	/* �������� ���� */
	int ary[SIZE]; //�迭 ����
	int *pLast; //������ �ּ�
	int *pWalk = NULL; //ó�� �ּ�

	/* ��ɹ� */
	pLast = ary + SIZE - 1; //������ �ּ� �ʱ�ȭ
	getData(ary, pWalk, pLast); //���� �Է�
	multiply(ary,  SIZE); //���⼭ ���� 2��� ��
	printData(ary, pWalk, pLast); //���� ���

	return 0;
} /* main */

/* ==================== multiply ====================
   Multiply elements in an array by 2
   �迭�� ���ҿ� 2�� ���ϱ�
	   Pre array has been filled
	   �̸� �迭�� ���� �ʱ�ȭ �Ǿ� ����
		   size indicates number of elements in array
		   size�� �迭�� ũ�⸦ �ǹ�
	   Post values in array doubled
	   �迭�� ���߿� ���� ���� 2�谡 ��
*/
void multiply(int *pAry,int size)
{
	// �������� ���� 
	int *pWalk; //ó�� �ּ�
	int *pLast; //������ �ּ�

	// ��ɹ�
	pLast = pAry + size - 1; //������ �ּ� �ʱ�ȭ

	for (pWalk = pAry; pWalk <= pLast; pWalk++)
		*pWalk = *pWalk * 2; //���� 2���
	return;
} /* multiply */


void getData(int*ary, int*pWalk, int*pLast) {
	for (pWalk = ary; pWalk <= pLast; pWalk++) //pWalk�� ������ �ּ��� ���� �ݺ�
	{
		printf("������ �Է��� �ּ���: ");
		scanf_s("%d", pWalk); //���� ����
	} /* for */
}

void printData(int*ary, int*pWalk, int*pLast) {
	printf("2��� �� ����: \n");
	for (pWalk = ary; pWalk <= pLast; pWalk++)
		printf(" %3d", *pWalk);
}
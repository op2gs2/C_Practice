/*
�ǽ� 7
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �����͸� �̿��� �迭 ����ϱ�
*/

#include <stdio.h>

#define MAX_SIZE 10 //�迭�� ũ�� ����

int main(void)
{
	/* ���� ���� ���� */
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //�迭 ����
	int *pWalk; //������ ���� ����
	int *pEnd; //�� ������ ����

	/* ��ɾ� */
	   /* Print array forward */
	printf("Array forward : ");
	for (pWalk = ary, pEnd = ary + MAX_SIZE; pWalk < pEnd; pWalk++) 
		//pwalk�� ������ ������ ���� �׷��� �迭 ���������� �ʱ�ȭ. pEnd�� �� ���� ���� �׷��� �迭�� �������� �ʱ�ȭ. �׷��� pWalk�� pEnd�� �۾��� �� ���� �ݺ��ϴ� �ݺ���
		printf("%3d", *pWalk);
	printf("\n");

	/* Print array backward */
	printf("Array backward: ");
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--)
		//pWalk�� �ϳ��� �����ϸ鼭 �ݺ�
		printf("%3d", *pWalk);
}
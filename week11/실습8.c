/*
�ǽ� 8
�ۼ���: 2018�� 11�� 15��
�ۼ���: �赿��
���α׷� ����: �����͸� �̿��� �迭 ����ϴ� �κ��� �Լ��� �����
*/

#include <stdio.h>
#define MAX_SIZE 10 //�迭�� ũ�� ����

//�Լ��� ����
void Array_forward(int*, int*, int*);
void Array_backward(int*, int*, int*);

int main(void)
{
	/* ���� ���� ���� */
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //�迭 ����
	int *pWalk=NULL; //������ ���� ����
	int *pEnd = NULL; //�� ������ ����

	Array_forward(ary, pWalk, pEnd);
	Array_backward(ary, pWalk, pEnd);

	return 0;
}

/* Print array forward */
void Array_forward(int *ptr, int*pWalk, int*pEnd) {
	printf("Array forward : ");
	for (pWalk = ptr, pEnd = ptr + MAX_SIZE; pWalk < pEnd; pWalk++)
		//pwalk�� ������ ������ ���� �׷��� �迭 ���������� �ʱ�ȭ. pEnd�� �� ���� ���� �׷��� �迭�� �������� �ʱ�ȭ. �׷��� pWalk�� pEnd�� �۾��� �� ���� �ݺ��ϴ� �ݺ���
		printf("%3d", *pWalk);
	printf("\n");
}

/* Print array backward */
void Array_backward(int*ptr, int*pWalk, int*pEnd) {
	printf("Array backward: ");
	for (pWalk = (ptr+ MAX_SIZE) - 1; pWalk >= ptr; pWalk--)
		//pWalk�� �ϳ��� �����ϸ鼭 �ݺ�
		printf("%3d", *pWalk);
}
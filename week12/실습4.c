/*
�ǽ�4
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: ������ ����� �� ��� ���� ���� ����ϴ� ���α׷�
*/

#include <stdio.h>

void sumarray(int arr[][5], int rowsum[], int colsum[]); //�Լ��� ����

int main(void) {
	int array[][5] = { {1,2,3,4,5}
	,{1,2,3,4,5}
	,{2,3,4,5,6}
	,{2,3,4,5,6}
	,{3,4,5,6,7} }; //2���� �迭 ����
	int rowsum[5] = { 0 }; //���� ����
	int colsum[5] = { 0 }; //���� ����

	sumarray(array,rowsum,colsum); //�Լ��� ȣ��

	//�迭�� ���. ��� ���� �յ� ���
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", array[i][j]); //�迭 ���
		}
		printf("%d\n", rowsum[i]); //���� �� ���
	}
	for (i = 0; i < 5; i++) {
		printf("%d\t", colsum[i]); //���� �� ���
	}
}

void sumarray(int arr[][5], int rowsum[], int colsum[]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			rowsum[i] += arr[i][j]; //���� ���� ����
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			colsum[i] += arr[j][i]; //���� ���� ����
		}
	}
}
/*
�ǽ�3
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: 2���� �迭 �� ��� ���� ���� ��� �����ϴ� �Լ� �ۼ�
*/

#include <stdio.h> //ǥ������¶��̺귯��

/*�Լ��� ����*/
void sumArray(int arr[][5], int rowSum[], int colSum[]);
void printArray(int arr[][5], int rowSum[], int colSum[]);

int main(int argc, char* argv[]) {
	int arr[5][5] = { 0 };
	int rowSum[5] = { 0 };
	int colSum[5] = { 0 };

	int i, j; //����� ����
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = (i + j) - i + j - i + 23;
		}
	}
	sumArray(arr, rowSum, colSum);
	printArray(arr, rowSum, colSum);
	return 0;
}

void sumArray(int arr[][5], int rowSum[], int colSum[]) {
	int i, j; //����� ����

	/*�� �� ���*/
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			rowSum[i] += arr[j][i];
			colSum[j] += arr[i][j];
		}
	}
}

void printArray(int arr[][5], int rowSum[], int colSum[]) {
	int i, j; //����� ����
	/*�� �� ���*/
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("%d\n", colSum[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", rowSum[i]);
	}
}
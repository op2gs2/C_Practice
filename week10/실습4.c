/*
�ǽ�4
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: 2���� �迭�� ���� ���� �� �ڿ� ����ϴ� ���α׷�
*/

#include <stdio.h>

int main(int argc, char*argv[]) {
	int arr[][6] = { {2,3,1,4,5,7},{4,6,3,2,1,5},{1,2,6,7,3,4} }; //�迭 ����
	int i, j, k; //�ݺ��� ����� ����
	int temp; //�ӽ� ���� ����

	//bubble sort
	for (k = 0; k < 3; k++) {
		for (i = 0; i < 6; i++) { // 0 ~ (i-1)���� �ݺ�
			for (j = 0; j < (6 - (i + 1)); j++) { // j��°�� j+1��°�� ��Ұ� ũ�� ���� �ƴϸ� ��ȯ
				if (arr[k][j] > arr[k][j + 1]) {
					temp = arr[k][j];
					arr[k][j] = arr[k][j + 1];
					arr[k][j + 1] = temp;
				}
			}
		}
	}

	//print
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
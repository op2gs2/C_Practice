/*
�ǽ�2
�ۼ���: �赿��
�ۼ���: 2018.11.06
���α׷� ����: 2���� �迭�� 1���� �迭�� �����ϴ� ���α׷�
*/

#include <stdio.h>

/*�Լ��� ����*/
void copyArray(int[2][8]);

int main(int argc, char*argv[]) {
	int i, j; //����� ����
	int cnt; //ī��Ʈ ���� ����
	int arr[2][8]; //�������迭 ����
	int arr1[16]; //������ �迭 ����
	int *temp;

	/*������ �迭 �ʱ�ȭ*/
	cnt = 1; //ī��Ʈ ���� �ʱ�ȭ
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //�迭 ���Ҹ� ī��Ʈ ���������� ����
			cnt++; //ī��Ʈ ���� ����
		}
	}

	copyArray(arr); //�Լ� ȣ��

	return 0;
}

//�迭�� 1���� �迭 & ���
void copyArray(int temp[2][8]) {
	int i, j; //����� ����
	int cnt; // ��� �迭 ÷��
	cnt = 0; //0����  �ʱ�ȭ
	int result[16] = { 0 }; //��� �迭 ���� �� �ʱ�ȭ

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			result[cnt] = temp[i][j]; //1���� �迭�� ���� ��
			printf("%d \t", result[cnt]); //���
			cnt++; //1���� �迭�� ÷�ڸ� ����
		}
	}
}
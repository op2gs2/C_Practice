/*
�ǽ�1
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: 2���� �迭�� ���� �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h> //ǥ������¶��̺귯��

//�Լ��� ����
void printArray(int arr[][8]);

int main(int argc, char* argv[]) {
	int i, j; //����� ����
	int cnt; //ī��Ʈ ���� ����
	cnt = 1; //ī��Ʈ�� 1���� ����
	int arr[2][8] = { 0 }; //�迭 ���� �� �ʱ�ȭ

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //�迭�� ī��Ʈ �� ����
			cnt++; //ī��Ʈ �� ����
		}
	}
	printArray(arr);
	return 0;
}

void printArray(int arr[][8]) { //�迭�� ������ִ� �Լ�
	int i, j; //����� ����
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			printf("[%d][%d] : %d ", j, i, arr[j][i]); //�迭 ���� ���
		}
		printf("\n");
	}
}
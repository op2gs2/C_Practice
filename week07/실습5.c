/*
�ǽ�5
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: ����� �迭�� ���� ���� �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h> //ǥ������¶��̺귯��

//�Լ��� ����
void bubble_sort(int list[]);
void arrayPrint(int list[]);

int main(int argc, char* argv[]) {
	int oneDim[10] = { 1 , 9 , 2 , 8 , 3 , 7 , 4 , 6 , 5 , 0 }; //�迭 ����

	bubble_sort(oneDim);// ���� ���� ����
	arrayPrint(oneDim); //�迭 ���

	return 0;
}


void bubble_sort(int list[]) { // ���� ����
	int i, j, temp; //����� �� �ӽ� ���� ����

	for (i = 0; i < 10; i++) { // 0 ~ (i-1)���� �ݺ�
		for (j = 0; j < (10 - (i + 1)); j++) { // j��°�� j+1��°�� ��Ұ� ũ�� ���� �ƴϸ� ��ȯ
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void arrayPrint(int list[]) { //�迭 �� ���ĵ� ���� ���
	int i; //����� ����
	for (i = 0; i < 10; i++) {
		printf("%d\t", list[i]);
	}
}
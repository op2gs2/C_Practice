/*
�ǽ�3
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: �迭 �Է� & ��� & �� ã�� ���α׷�
*/

#include <stdio.h> //ǥ������¶��̺귯��

/*�Լ��� ����*/
void input_f(int arr[]);
void print_f(int arr[]);
int find_array(int arr[], int key);

int main(int argc, char* argv[]) {
	int arr[10]; //�迭 ����
	int find; //ã������ ���� �����ϴ� ���� ����
	int where; //ã�� ���� ��ġ ����
	input_f(arr); //�Է� ����
	print_f(arr); //�����

	printf("\nã������ ���� �Է��� �ּ���");
	scanf_s("%d", &find); //ã������ �� �Է� �ް�

	where = find_array(arr, find); //��ġ�� ����
	printf("ã������ ���� ��ġ�� %d��° �Դϴ�.", (where + 1));
	return 0;
}

void input_f(int arr[]) {
	int i; //���� ����
	for (i = 0; i < 10; i++) {
		printf("���� �Է��� �ּ���: (%d�� ����)", 10 - i);
		scanf_s("%d", &arr[i]); //�ش� ��° ��ġ�� ���� ����
	}
}


void print_f(int arr[]) {
	int i; //���� ����
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]); //�ش� ��° ��ġ���� ���� �����
	}
}

int find_array(int arr[], int key) {
	int i; //���� ����
	for (i = 0; i < 10; i++) {
		if (key == arr[i]) { //���� ã������ ���� �ش� ��° ��ġ�� ���� ���ٸ�,
			return i; //�ش� ��°�� ��ȯ
		}
	}
	printf("�ش��ϴ� Ű�� ã�� ���߽��ϴ�."); //�ƴϸ�,
	return -1; //���� �ٸ� ���� ���
}
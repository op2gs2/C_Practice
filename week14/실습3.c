/*
�ۼ���: �赿��
�ۼ���: 2018�� 12�� 06��
���α׷� ����: ���� �޸� �Ҵ� �ǽ�
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int *ptr, int size);
void printArray(int *ptr, int size);

int main(void) {
	int size_arr = 0; //�迭 ���� ���� ���� ����
	int *dynamic_arr = NULL;
	printf("������ �迭 ������ ������ �Է����ּ���: ");
	scanf_s("%d", &size_arr);

	dynamic_arr = (int*)calloc(size_arr, 4); //�޸� �Ҵ�
								 
	fillArray(dynamic_arr, size_arr);
	printArray(dynamic_arr, size_arr);

	free(dynamic_arr);//�޸� ����
	return 0;
}

void fillArray(int *ptr, int size) { //����ڰ� �Է��� ���� ���̷� ������ ������ �迭�� ä��
	int random_range = 0; //���� ������ �����ϴ� ����
	int i = 0; //�ݺ����� ���� ����
	printf("���� ������ �������ּ���: ");
	scanf_s("%d", &random_range);
	srand((unsigned)time(NULL)); //srand�� ������ �õ尪 �ʱ�ȭ
	for (;i < size;i++) { //������ �ʱ�ȭ�ؼ� �ʱ���� ����
		ptr[i] = (rand() % random_range) + 1; //���� ���� �迭�� ����
	}

}
void printArray(int *ptr, int size) { //�迭�� ������ ���
	int i = 0;
	printf("��� ���\n");
	for (; i < size; i++) { //������ �ʱ�ȭ �����Ƿ� �ʱ���� ����
		printf("dynamic_arr[%d]: %d\n", i, *(ptr + i));
	}
}
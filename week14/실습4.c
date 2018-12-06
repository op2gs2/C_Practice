/*
�ۼ���: �赿��
�ۼ���: 2018�� 12�� 06��
���α׷� ����: ������ �迭�� ���� �Ҵ�� ������ �迭�� �����ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h>

void copy_array(int *ptr, int**two_ptr, int size_arr);

int main(void) {
	int *arr_one_dimension = NULL; //������ �迭������ ���� ������
	int size_arr = 0; //�迭�� ũ�� ����
	int i = 0; //�ݺ����� �����
	
	int **arr_two_dimension = NULL; //������ �迭������ ���� ������

	//¦�������� �迭�� ũ�⸦ �Է� �ް�, Ȯ���ϸ�, Ʋ���� �ٽ� �Է� �޵��� �ϴ� ���α׷�
	while (1) {
		printf("�迭�� ũ�⸦ �Է����ּ���. ��, ¦��ũ�� ��ŭ�� �Է����ּ���.");
		scanf_s("%d", &size_arr);
		if (size_arr % 2 == 0) {
			break;
		}
		printf("¦�� ������ �ٽ� �Է����ּ���.");
	}

	arr_one_dimension = calloc(size_arr, 4); //������ �迭 ���� �Ҵ�
	
	//�迭�� ���� �Է���
	for (; i < size_arr; i++) {
		printf("�迭 ���� �Է�");
		scanf_s("%d", &arr_one_dimension[i]);
	}

	copy_array(arr_one_dimension, arr_two_dimension, size_arr);

}

void copy_array(int *ptr, int**two_ptr, int size_arr) {
	int size_two_arr = 0; //������ �迭�� ���� ũ�� ����
	int width = 0; //�迭�� ���� ũ�⸦ ����
	int i = 0; //�ݺ��� ���� ����
	int j = 0; //�ݺ��� ���� ����
	int cnt = 0; //������ �迭�� �ε����� ����Ű�� ����

	printf("2���� �迭�� ũ�⸦ �Է����ּ���.");
	scanf_s("%d", &size_two_arr);

	//���� ���� ����ϱ�. ���࿡ ���α��� ��ŭ 2���� �迭�� ������ �������� �״��, �ƴϸ� �׳� ���� �ϳ��� �� �߰��� �������ش�.
	if (size_arr % size_two_arr != 0) {
		width = size_two_arr + 1; //������ �������� �����Ƿ�, ���°��� ����� ��. �׷��� ������ �ϳ��� �� ����� �ش�.
	}
	else {
		width = size_two_arr; //������ �������� �� ��ŭ�� ���� ��.
	}
	
	//������ �迭 �����
	two_ptr = (int**)malloc(sizeof(int*) * size_two_arr);
	for (;i < size_two_arr; i++) {
		two_ptr[i] = (int*)malloc(sizeof(int*)*width);
	}
	
	//������ �迭�� ������ �迭�� �����ϱ�. �̶�, ������ �迭��ŭ�� �����ϰ� ���� 0���� ä���ش�.
	for (i = 0; i < (size_two_arr); i++) {
		for (j = 0;j < width; j++) {
			if (cnt < size_arr) {
				two_ptr[i][j] = ptr[cnt];
				cnt += 1;
			}
			else {
				two_ptr[i][j] = 0;
				cnt += 1;
			}
		}
	}

	//2���� �迭 ���
	printf("2���� �迭 ���: \n");
	for (i = 0; i < (size_two_arr); i++) {
		for (j = 0;j < width; j++) {
			printf("two_ptr[%d][%d]: %d\t",i,j,two_ptr[i][j]);
		}
		printf("\n");
	}
}
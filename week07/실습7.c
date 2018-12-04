/*
�ǽ�7
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: 2���� �迭�� 1���� �迭�� �����ϰų�
		1���� �迭 ���� ����
		Ư�� ���� ���� �˻��ϴ����α׷�
*/

#include <stdio.h>

/*�Լ��� ����*/
int copyArray(int[2][8], int, int);
void selectionSort(int[]);
int binarySearch(int[], int);

int main(int argc, char*argv[]) {
	int i, j; //����� ����
	int cnt; //ī��Ʈ ���� ����
	int arr[2][8]; //�������迭 ����
	int arr1[16]; //������ �迭 ����

	/*������ �迭 �ʱ�ȭ*/
	cnt = 1; //ī��Ʈ ���� �ʱ�ȭ
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //�迭 ���Ҹ� ī��Ʈ ���������� ����
			cnt++; //ī��Ʈ ���� ����
		}
	}

	/*������ -> ������*/
	//�ε��� 7������ �ְ�
	for (i = 0; i < 8; i++) {
		arr1[i] = copyArray(arr, 0, i);
	}
	//�ε��� 15���� ����
	for (i = 8; i < 16; i++) {
		arr1[i] = copyArray(arr, 1, (i - 8));
	}

	/*���� Ž��: ���� ã��*/
	printf("ã�� ���� �˷��ּ���:");
	scanf_s("%d", &i);
	printf("ã���ô� ���� %d��°�� �ֽ��ϴ�", binarySearch(arr1, i));

	return 0;
}

//�迭�� 1���� �迭��
int copyArray(int temp[2][8], int cnt1, int cnt2) {
	return temp[cnt1][cnt2];
}

//���� ����
void selectionSort(int data[]) {
	//�������� (���� �� -> ū ��)
	int indexMin, temp;
	for (int i = 0; i < 15; i++)
	{
		//�߿�
		indexMin = i;
		for (int j = i + 1; j < 16; j++)
		{
			if (data[j] < data[indexMin])
			{    //data[indexMin]�� �������� data[j]�� �˻��Ѵ�.
				//data[indexMin]�� �� ���� ���� ���� �߽߰� indexMin = j�� �ȴ�.
				indexMin = j;
			}
		}
		//���� for���� �ݺ����� ���� ���� ���� ã���� ������ �ٲ۴�.
		temp = data[indexMin];
		data[indexMin] = data[i];
		data[i] = temp;
	}
}

//���� Ž��
int binarySearch(int ar[], int target) {
	// ã�� ���ڰ� ������ ã�� ������ �ε��� ���� ������ -1 ����
	int first = 0;
	int last = 15;
	int mid = 0;

	// first�� last�� ���� ������ �ݺ��ϴ� ����
	// while(first < last)�̸� ������ �ϳ��� ��������
	// �˻����� �ʰ� ����Ǳ� �����̴�.
	while (first <= last) {
		mid = (first + last) / 2;
		if (ar[mid] == target) {
			return mid;
		}
		else {
			if (ar[mid] > target)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}
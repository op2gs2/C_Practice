/*
�ǽ�1
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: �迭�� ����ϰų�, �迭 ������ ���� ���ϴ� ���α׷�
*/

#include <stdio.h> //ǥ������¶��̺귯��

//�Լ��� ����
void printArray(int arr[]);
int sumArray(int arr[]);

int main(int argc, char* argv[]) {
	int arr[] = { 4,2,3,1,4,5,6,7,4,3 }; //�迭 ����
	int sum; //�迭�� ���� �޴� ���� ����

	/*��� ���*/
	printf("��°�� >\n");
	printf("�迭�� ��\n");
	printArray(arr); //�迭�� �������

	printf("�迭�� �� ��\n");
	sum = sumArray(arr); //�迭�� ���� ������

	printf("�迭�� �� : %d\n", sum);
	return 0;
}

void printArray(int arr[]) { //�迭�� ������ִ� �Լ�
	int i;    //���� ���� ����
	for (i = 0; i < 10; i++) { //�迭�� �湮�ϴ� �ݺ���
		printf("�迭[%d] = %d\n", i, arr[i]); //�湮�Ͽ� ���
	}
}

int sumArray(int arr[]) {
	int i; int result; //���� ������ ������ ���� �����ϴ� ���� ����
	result = 0; //������ �������� �ʱ�ȭ�� ����Ǿ�� ��
	for (i = 0; i < 10; i++) { //�迭�� �湮�ϴ� �ݺ���
		result += arr[i]; //�湮�Ͽ� ������ ����
	}

	return result; //������ ��� ��ȯ
}
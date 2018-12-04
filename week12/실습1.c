/*
�ǽ�1
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 22��
���α׷� ����: �迭�� ���� ��� ���� �Ǻ�
*/

#include <stdio.h>

int sumarray(int arr[], int size,int*sum);
void printarray(int arr[], int size,int *sum);

int main(void) {
	//�迭 �� ���� ����
	int array[10] = { 1,-1,-1,1,-1,1,-1,0,-1,1 };
	int sum = 0;

	//�Լ� ȣ��
	sumarray(array, 10, &sum); //�հ� ��.���� ���� ��ȯ
	printarray(array, 10, &sum); //�迭 ���� ���

	return 0;
}

int sumarray(int arr[], int size , int *sum) {

	//���� ���
	*sum += arr[0];

	//��.���� �Ǻ�
	if (*sum > 0)
		return 1;
	else if (*sum < 0)
		return -1;
	else
		return 0;

}

void printarray(int arr[], int size, int *sum) { //�迭 ������ ��� ��. ���� ���� ���
	//�迭 ���� ���
	printf("�迭�� ���");
	int i;
	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf_s("\n");

	//�迭�� �� ���
	printf("�迭�� ���� ���� %d�Դϴ�. \n",*sum);
	printf("����, ");
	if (*sum > 0)
		printf("��� �Դϴ�.");
	else if (*sum < 0)
		printf("���� �Դϴ�.");
	else
		printf("0 �Դϴ�.");
}
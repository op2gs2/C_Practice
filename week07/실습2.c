/*
�ǽ�2
�ۼ���: �赿��
�ۼ���: 2018.10.31
���α׷� ����: �迭�� 0���� �ʱ�ȭ ��, �Ǻ���ġ ������ �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h> //ǥ������¶��̺귯��

/*�Լ��� ����*/
void printArray(int arr[]);
void serFiboArray(int arr[]);

int main(int argc, char* argv[]) {
	int arr[10] = { 0 }; //����� ���ÿ� �迭�� 0���� �ʱ�ȭ

	serFiboArray(arr); //�迭�� �Ǻ���ġ �� ����

	printf("�Ǻ���ġ ���� ���: \n");
	printArray(arr); // �迭 �� ���� ���

	return 0; //���α׷� ����
}

void serFiboArray(int arr[]) { //�Ǻ���ġ ������ ����ϰ� �����ϴ� �Լ�
	int i; //for�� �ݺ� Ƚ��
	int head = 0; //��
	int mid = 0; //�߰�
	int rear = 1; //��

	for (i = 0; i < 10; i++) {
		arr[i] = head; //�Ǻ���ġ ���� ����
		/*���� �̵���Ű��*/
		mid = head + rear;
		head = rear;
		rear = mid;

	}
}

void printArray(int arr[]) { //�迭�� ������ִ� �Լ�
	int i;	//���� ���� ����
	printf("[ ");
	for (i = 0; i < 10; i++) { //�迭�� �湮�ϴ� �ݺ���
		printf("%d\t", arr[i]); //�湮�Ͽ� ���
	}
	printf(" ]");
}




/*
�ǽ�6
�ۼ���: �赿��
�ۼ���: 2018.11.07
���α׷� ����: ������ ���� ���� �� �ʱ�ȭ�� ������ �ּҿ� �� ���
*/

#include <stdio.h> //ǥ������¶��̺귯��
int main(int argc, char*argv[]) {
		int i = 10; //���� ���� ����
		int *ptr = &i; //������ ���� ����
		printf("ptr�� �ּҰ� : %p\n", &ptr);
		printf("i�� �ּҰ�   : %p\n", &i);
		printf("i�� �ּҰ�   : %p\n\n", ptr);
		printf("i�� ��       : %d\n", i);
		printf("i�� ��       : %d\n", *ptr);
		return 0;
}

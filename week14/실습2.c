/*
�ۼ���: �赿��
�ۼ���: 2018�� 12�� 06��
���α׷� ����: ����ü ����
*/

/*
����ü�� �޸𸮿��� ���� �ٸ� ������ ������ ���� �� �� �ֵ��� �ϴ� �����̴�. �̶� �޸� ũ��� ���� ū �ڷ����� ��������.
*/

#include <stdio.h>

int main(void) {
	union
	{
		short num;
		char chAry[2];
	}data;

	data.num = 16706;

	printf("short %hd\n", data.num);
	data.chAry[0] = 'A';
	data.chAry[1] = 'B';
	//�� �̻� data.num�� �ش��ϴ� ���� ����� �� ����.
	printf("Ch[0] : %c\n", data.chAry[0]);
	printf("Ch[1] : %c\n", data.chAry[1]);
	printf("short %hd\n", data.num);//������ ���� �迭�� ����ü ������ ����߱⿡ ������ �ִ� �����ʹ� ����
	return 0;
}
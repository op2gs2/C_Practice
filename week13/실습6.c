/*
�ۼ���: �赿��
�ۼ���: 2018�� 11�� 29��
���α׷� ����: ����ü�� ����� ���ǿ� �ش��ϴ� ���α׷�
����1: 5���� ������ ������ �� �ִ� ����ü �迭�� �����ϰ� �ݺ����� ���� Ű���带 ���� �Է¹����ÿ�
����2: 5���� ������ ����, ����� �̿��Ͽ� ���
����3: �Է°� ���, ������ ����� �Լ��� �̿��Ͽ� ó��
*/

#include <stdio.h>

/*����ü ����*/
typedef struct {
	char name[20];
	int age;
	int score[2];
}STUDENT;

void calculate_ave(STUDENT *s, int * ave);
void input(STUDENT *s);
void print(STUDENT *s, int * ave);

int main(void) {
	STUDENT s[5]; //����ü �迭
	int ave[5] = { 0 }; //��հ� ��� ����
	
	input(s); //�Է�
	calculate_ave(s, ave); //��� ���
	print(s, ave); //���
}

void input(STUDENT *s) {
	int i;
	for (i = 0; i < 5; i++) {
		printf_s("�̸� �Է�: ");
		scanf_s("%s", s[i].name, 20);
		printf_s("���� �Է�: ");
		scanf_s("%d", &s[i].age);
		printf_s("�߰� ���� �Է�: ");
		scanf_s("%d", &s[i].score[0]);
		printf_s("�⸻ ���� �Է�: ");
		scanf_s("%d", &s[i].score[1]);
		printf("\n");
	}
}
void print(STUDENT *s, int *ave) {
	int i;
	for (i = 0; i < 5; i++) {
		printf_s("�̸� ��� : %s", s[i].name);
		printf("\n");
		printf_s("���� ��� : %d", s[i].age);
		printf("\n");
		printf_s("���� ��� ���: %d", ave[i]);
		printf("\n");
	}
}
void calculate_ave(STUDENT *s, int* ave) {

	int i;
	for (i = 0; i < 5; i++) {
		*(ave+i)= (s[i].score[0] + s[i].score[1]) / 2;
	}
}
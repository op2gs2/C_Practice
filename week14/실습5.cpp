/*
�ۼ���: �赿��
�ۼ���: 2018�� 12�� 06��
���α׷� ����: �����Ҵ� ����ü �迭�� ������� ���� ó���� �ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h>



typedef struct {
	char name[20];
	int age;
	char address[100];
	char department[100];
}STUDENT;

int main(void) {
	STUDENT *arr = NULL;
	STUDENT temp;
	int student_num = 0; //�л���
	int select = 0;
	int i = 0; int j = 0;
	while (1) {
		printf("------------------------------\n");
		printf("      �л� ���� ó��\n");
		printf("------------------------------\n");
		printf("	1.�Է�\n");
		printf("	2.���� �� ����\n");
		printf("	3.���\n");
		printf("------------------------------\n");

		printf("����: ");
		scanf_s("%d", &select);

		switch (select) {
		case 1:
			//1. �Է�: ����ڷκ��� ������ �л� ���� �Է� �޾� ����ü �迭�� �����Ҵ�ް� ������ �л��� ��ŭ�� �Է� ����
			printf("������ �л����� �Է����ּ���.");
			scanf_s("%d", &student_num);

			//���� �迭 �Ҵ�
			arr = (STUDENT*)malloc(student_num * sizeof(STUDENT));

			//�л� ���� �Է�
			for (i = 0; i < student_num; i++) {
				printf("%d��° �л��� ������ �Է����ּ���.\n", i + 1);
				printf("�л��� �̸��� �Է����ּ���.");
				scanf_s("%s", (arr[i].name), 20);
				printf("�л��� ������ �Է����ּ���.");
				scanf_s("%d", &(arr[i].age));
				printf("�л��� �ּ��� �Է����ּ���.");
				scanf_s("%s", (arr[i].address), 100);
				printf("�л��� �а��� �Է����ּ���.");
				scanf_s("%s", (arr[i].department), 100);
			}
			break;
		case 2:
			//2. ����: ����ü �迭�� ���� ������ �����Ѵ�.
			for (i = 0; i < student_num; i++) {
				for (j = 0; j < (student_num - 1); j++) {
					if (arr[j +1].age < arr[j].age) {
						temp = arr[j +1];
						arr[j +1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			printf("���� �� ���� �Ϸ�!\n");
			break;
		case 3:
			//3. ���: ����ü �迭�� ������ ����Ѵ�.
			printf("����ü ������ ����մϴ�.\n");
			for (i = 0; i < student_num; i++) {
				printf("%d��° �л��� ������ ���.\n", i + 1);
				printf("�л��� �̸�: %s\n", arr[i].name);
				printf("�л��� ����: %d\n", arr[i].age);
				printf("�л��� �ּ�: %s\n", arr[i].address);
				printf("�л��� �а�: %s\n", arr[i].department);
				printf("=========================================\n");
			}
			printf("����ü ������ ��� ��!\n");
			break;
		default:
			printf("�߸� �Է� �ϼ̽��ϴ�.\n");
		}
	}
	
}
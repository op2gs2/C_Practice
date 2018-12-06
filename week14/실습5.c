/*
작성자: 김동영
작성일: 2018년 12월 06일
프로그램 설명: 동적할당 구조체 배열를 기반으로 여러 처리를 하는 프로그램
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
	int student_num = 0; //학생수
	int select = 0;
	int i = 0; int j = 0;
	while (1) {
		printf("------------------------------\n");
		printf("      학생 정보 처리\n");
		printf("------------------------------\n");
		printf("	1.입력\n");
		printf("	2.나이 순 정렬\n");
		printf("	3.출력\n");
		printf("------------------------------\n");

		printf("선택: ");
		scanf_s("%d", &select);

		switch (select) {
		case 1:
			//1. 입력: 사용자로부터 저장할 학생 수를 입력 받아 구조체 배열을 동적할당받고 지정된 학생수 만큼을 입력 받음
			printf("저장할 학생수를 입력해주세요.");
			scanf_s("%d", &student_num);

			//동적 배열 할당
			arr = (STUDENT*)malloc(student_num * sizeof(STUDENT));

			//학생 정보 입력
			for (i = 0; i < student_num; i++) {
				printf("%d번째 학생의 정보를 입력해주세요.\n", i + 1);
				printf("학생의 이름을 입력해주세요.");
				scanf_s("%s", (arr[i].name), 20);
				printf("학생의 나이을 입력해주세요.");
				scanf_s("%d", &(arr[i].age));
				printf("학생의 주소을 입력해주세요.");
				scanf_s("%s", (arr[i].address), 100);
				printf("학생의 학과을 입력해주세요.");
				scanf_s("%s", (arr[i].department), 100);
			}
			break;
		case 2:
			//2. 정렬: 구조체 배열을 나이 순서로 정렬한다.
			for (i = 0; i < student_num; i++) {
				for (j = 0; j < (student_num - 1); j++) {
					if (arr[j +1].age < arr[j].age) {
						temp = arr[j +1];
						arr[j +1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			printf("나이 순 정렬 완료!\n");
			break;
		case 3:
			//3. 출력: 구조체 배열의 내용을 출력한다.
			printf("구조체 내용을 출력합니다.\n");
			for (i = 0; i < student_num; i++) {
				printf("%d번째 학생의 정보를 출력.\n", i + 1);
				printf("학생의 이름: %s\n", arr[i].name);
				printf("학생의 나이: %d\n", arr[i].age);
				printf("학생의 주소: %s\n", arr[i].address);
				printf("학생의 학과: %s\n", arr[i].department);
				printf("=========================================\n");
			}
			printf("구조체 내용을 출력 끝!\n");
			break;
		default:
			printf("잘못 입력 하셨습니다.\n");
		}
	}
	
}
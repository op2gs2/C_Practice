/*
작성자: 김동영
작성일: 2018년 11월 29일
프로그램 설명: 구조체를 만들고 조건에 해당하는 프로그램
조건1: 5명의 정보를 저장할 수 있는 구조체 배열을 선언하고 반복문을 통해 키보드를 통해 입력받으시오
조건2: 5명의 정보를 총점, 평균을 이용하여 출력
조건3: 입력과 출력, 총점과 평균은 함수를 이용하여 처리
*/

#include <stdio.h>

/*구조체 선언*/
typedef struct {
	char name[20];
	int age;
	int score[2];
}STUDENT;

void calculate_ave(STUDENT *s, int * ave);
void input(STUDENT *s);
void print(STUDENT *s, int * ave);

int main(void) {
	STUDENT s[5]; //구조체 배열
	int ave[5] = { 0 }; //평균값 결과 저장
	
	input(s); //입력
	calculate_ave(s, ave); //평균 계산
	print(s, ave); //출력
}

void input(STUDENT *s) {
	int i;
	for (i = 0; i < 5; i++) {
		printf_s("이름 입력: ");
		scanf_s("%s", s[i].name, 20);
		printf_s("나이 입력: ");
		scanf_s("%d", &s[i].age);
		printf_s("중간 점수 입력: ");
		scanf_s("%d", &s[i].score[0]);
		printf_s("기말 점수 입력: ");
		scanf_s("%d", &s[i].score[1]);
		printf("\n");
	}
}
void print(STUDENT *s, int *ave) {
	int i;
	for (i = 0; i < 5; i++) {
		printf_s("이름 출력 : %s", s[i].name);
		printf("\n");
		printf_s("나이 출력 : %d", s[i].age);
		printf("\n");
		printf_s("점수 평균 출력: %d", ave[i]);
		printf("\n");
	}
}
void calculate_ave(STUDENT *s, int* ave) {

	int i;
	for (i = 0; i < 5; i++) {
		*(ave+i)= (s[i].score[0] + s[i].score[1]) / 2;
	}
}
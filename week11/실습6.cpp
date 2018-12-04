/*
실습 6
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 이중 포인터를 이용해 직접, 간접, 이중 간접 참조하는 프로그램
*/

#include <stdio.h>



int main(void) {
	int value = 0; //변수
	int *p = &value; //포인터 변수
	int **q = &p; //이중 포인터 변수

	//직접 참조 실습
	printf("값 입력: ");
	scanf_s("%d", &value);
	printf("직접 참조 출력: %d\n\n", value);

	//간접 참조 실습
	printf("값 입력: ");
	scanf_s("%d", p);
	printf("간접 참조 출력: %d\n\n", *p);

	//이중 간접 참조 실습
	printf("값 입력: ");
	scanf_s("%d", q);
	printf("이중 간접 참조 출력: %d\n\n", *q);

	return 0;
}
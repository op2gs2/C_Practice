/*
실습 3
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 변수 선언 후 주소 출력
*/

#include <stdio.h>

void print_address(int*, double*, char*);

int main(void) {
	int num1 = 0; double num2 = 0; char num3 = 0; //변수 선언

	print_address(&num1, &num2, &num3); //함수 호출
	return 0;
}

void print_address(int* temp1, double*temp2, char*temp3) {
	//주소 값을 받아 출력
	printf("정수형: %#p\n", temp1);
	printf("실수형: %#p\n", temp2);
	printf("문자형: %#p\n", temp3);
}
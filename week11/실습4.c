/*
실습 4
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 포인터를 이용해, 변수를 넘기고 변수의 값을 바꾸는 함수
*/

#include <stdio.h>

void swap(int*, int*); //함수의 원형

int main(void) {
	int num1=10, num2=30; //변수 선언 및 초기화
	printf("첫번째 변수: %d   두번째 변수: %d\n", num1, num2);
	swap(&num1, &num2); //함수 호출

	printf("첫번째 변수: %d   두번째 변수: %d\n", num1, num2);
	return 0;
}

void swap(int *temp1, int *temp2) {
	int swap_temp = *temp1; //임시 변수
	//swap 진행
	*temp1 = *temp2;
	*temp2 = swap_temp;
}
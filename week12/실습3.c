/*
실습3
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 이차원 배열을 다른 함수에 전달해 출력하는 프로그램
*/

#include <stdio.h>

void printarraay(int(*array)[4]);

int main(void) {
	int array[][4] = { {1,2,3,4},{5,6,7,8} }; //배열 선언

	printarraay(array); //함수 호출

	return 0; //프로그램의 종료
}

void printarraay(int (*array)[4]) {
	printf_s("배열 내용 출력: \t\n");
	int i, j;
	for (j = 0; j < 2; j++) { //차원을 결정
		for (i = 0; i < 4; i++) { //차원 내 배열 순서 결정
			printf("%d\t", (*array)[i]); //출력
		}
		printf("\n");
		array++; //차원을 증가
	}
	
}
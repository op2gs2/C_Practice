/*
실습2
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 배열의 원소가 -1이 될때 까지 출력하는 프로그램
*/

#include <stdio.h>

void printarraay(int *ptr_arr);

int main(void) {
	int array[10] = { 1,2,3,4,5,-1,7,8,9,10 }; //배열 선언

	printarraay(array); //함수 호출

	return 0; //프로그램의 종료
}

void printarraay(int *ptr_arr) {
	printf_s("배열 내용 출력: \t");
	while (*ptr_arr != -1) { //배열의 원소가 -1이 아니면
		printf_s("%d\t", *(ptr_arr++)); //내용을 출력함
	}
}
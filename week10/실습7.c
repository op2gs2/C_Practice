/*
실습7
작성자: 김동영
작성일: 2018.11.07
프로그램 설명: 포인터를 이용한 값 변경
*/

#include <stdio.h> //표준입출력라이브러리
int main(int argc, char*argv[]) {
	int i = 10; //정수 변수 선언
	int *ptr = &i; //포인터 변수 선언
	*ptr = i + 20; //포인터 값 증가
	printf("i의 값은   :  %d \n", i);
	i = i + 20; //정수 변수의 값 증가
	printf("i의 값은   :  %d \n", *ptr);
	return 0;
}
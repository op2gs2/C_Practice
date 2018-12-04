/*
실습6
작성자: 김동영
작성일: 2018.11.07
프로그램 설명: 포인터 변수 선언 및 초기화와 포인터 주소와 값 출력
*/

#include <stdio.h> //표준입출력라이브러리
int main(int argc, char*argv[]) {
		int i = 10; //정수 변수 선언
		int *ptr = &i; //포인터 변수 선언
		printf("ptr의 주소값 : %p\n", &ptr);
		printf("i의 주소값   : %p\n", &i);
		printf("i의 주소값   : %p\n\n", ptr);
		printf("i의 값       : %d\n", i);
		printf("i의 값       : %d\n", *ptr);
		return 0;
}

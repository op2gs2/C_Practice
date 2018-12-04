/*
실습5
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 함수 포인터를 이용해 함수에 접근하는 프로그램
*/

#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);
void mul(int num1, int num2);
void div(int num1, int num2);

int main(void) {
	void(*fun)(int, int) = NULL; //함수 포인터 선언 및 초기화
	int menu; //메뉴 값 변수 선언
	int num1, num2; //값 저장 변수

	printf_s("1은 합, 2는 차, 3은 곱, 4는 나눗셈의 몫: \t");
	scanf_s("%d", &menu); //메뉴 값 입력 받기

	printf_s("값을 입력하세요");
	scanf_s("%d", &num1); //값 1 입력 받기
	printf_s("값을 입력하세요");
	scanf_s("%d", &num2);//값 2 입력 받기

	switch (menu) {
		case 1: //더하기
			fun = add;
			fun(num1, num2);
			break;

		case 2: //빼기
			fun = sub;
			fun(num1, num2);
			break;

		case 3: //곱하기
			fun = mul;
			fun(num1, num2);
			break;

		case 4: //나누기 (몫만)
			fun = div;
			fun(num1, num2);
			break;
	}

	return 0;
}

void add(int num1, int num2) { //더하기
	printf("결과는: %d", num1 + num2);
}
void sub(int num1, int num2) { //빼기
	printf("결과는: %d", num1 - num2);
}
void mul(int num1, int num2) { //곱하기
	printf("결과는: %d", num1 * num2);
}
void div(int num1, int num2) { //나누기
	printf("결과는: %d", num1 / num2);
}
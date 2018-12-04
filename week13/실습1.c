/*
작성자: 김동영
작성일: 2018년 11월 29일
프로그램 설명: 구조체 (분수의 곱) 연습
*/

#include <stdio.h>

int main(void) {
	typedef struct {
		int numerator; //분자 값 변수
		int denominator; //분모 값 변수
	}FRACTION;

	FRACTION fr1; //첫번째 분수
	FRACTION fr2; //두번째 분수
	FRACTION res; //결과 저장 분수

	/*분수에 들어갈 값 입력*/
	printf_s("key first in the form of x/y: ");
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator); //첫번째 분수 값 입력
	printf_s("key second in the form of x/y: ");
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator); //두번째 분수 값 입력

	res.numerator = fr1.numerator * fr2.numerator; //분자 값 계산
	res.denominator = fr1.denominator * fr2.denominator; //분모 값 계산

	/*결과 출력*/
	printf_s("\n the result of %d/%d * %d/%d is %d/%d",
		fr1.numerator, fr1.denominator,
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);

	return 0;
}
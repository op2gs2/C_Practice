/*
작성자: 김동영
작성일: 2018년 11월 29일
프로그램 설명: 실습 1의 계산 부분만을 함수로 작성
*/

#include <stdio.h>

typedef struct {
	int numerator; //분자 값 변수
	int denominator; //분모 값 변수
}FRACTION;

void multiplication(FRACTION *fr1, FRACTION *fr2, FRACTION *res);

int main(void) {
	FRACTION fr1; //첫번째 분수
	FRACTION fr2; //두번째 분수
	FRACTION res; //결과 저장 분수

	/*분수에 들어갈 값 입력*/
	printf_s("key first in the form of x/y: ");
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator); //첫번째 분수 값 입력
	printf_s("key second in the form of x/y: ");
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator); //두번째 분수 값 입력

	/*분수 계산함수*/
	multiplication(&fr1, &fr2, &res);

	/*결과 출력*/
	printf_s("\n the result of %d/%d * %d/%d is %d/%d",
		fr1.numerator, fr1.denominator,
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);
}

void multiplication(FRACTION *fr1, FRACTION *fr2, FRACTION *res) {
	res->numerator = fr1->numerator * fr2->numerator; //분자 값 계산
	res->denominator = fr1->denominator * fr2->denominator; //분모 값 계산

	
}
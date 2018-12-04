/*
실습 1
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 포인터를 이용, 다른 함수에서 변수 접근
*/
#include <stdio.h>
void mul(double *, double *, double *); //함수의 원형

int main()
{
	double res, a, b; //변수 선언
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b); //피 연산자 입력
	mul(&res, &a, &b); //함수 호출
	printf("두 수의 곱은 : %.2lf\n", res);
	return 0;
}
void mul(double *rp, double *ap, double *bp)
{
	*rp = *ap * *bp; //포인터를 이용한 계산
}
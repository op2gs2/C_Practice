/*
실습6
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 포인터를 리턴하는 프로그램
*/

#include <stdio.h>

double* mul(double *ap, double *bp);

int main(void) {
	//변수 선언
	double a, b; //값을 입력 받는 변수
	double *res = NULL; // 결과를 가리키는 변수
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b); //값을 입력 받기
	res = mul(&a, &b); //결과 값을 저장
	printf("두 수의 곱은 : %.2lf\n", *res);
	return 0;
}

double* mul(double *ap, double *bp) {
	double rp; //결과값 저장 변수
	rp = *ap * *bp; //계산 후 결과값 저장 변수에 저장
	return &rp; //결과 값 반환
}
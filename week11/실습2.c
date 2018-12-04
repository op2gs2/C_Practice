/*
실습 2
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 포인터를 이용한 반환
*/

#include <stdio.h>

double* mul(double *ap, double *bp);//함수의 원형

int main()
{
	double a, b; //변수 선언
	double *res = NULL; //포인터 변수 선언
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b); //값 입력
	res = mul(&a, &b); //함수 주소를 포인터변수에 저장
	printf("두 수의 곱은 : %.2lf\n", *res);
	return 0;
}
double* mul(double *ap, double *bp)
{
	double rp; //값 저장 변수
	rp = *ap * *bp;
	return &rp; //변수의 주소 값 반환
}
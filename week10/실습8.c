/*
실습8
작성자: 김동영
작성일: 2018.11.07
프로그램 설명: 리턴 값이 없이 포인터를 이용해서 결과 값을 결정하는 방법
*/

#include <stdio.h> //표준입출력라이브러리

void mul(double *, double *, double *); //함수의 원형

int main(int argc, char*argv[]) {
	double res, a, b; //3개의 double형 변수 선언
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b); //입력을 받음
	mul(&res, &a, &b); //곱하기 연산 수행후 res에 저장
	printf("두 수의 곱은 : %.2lf\n", res);
	return 0;
}

void mul(double *rp, double *ap, double *bp) { //곱하기 연산을 수행하는 함수
	*rp = *ap * *bp;
}

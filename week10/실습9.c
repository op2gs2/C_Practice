/*
실습9
작성자: 김동영
작성일: 2018.11.07
프로그램 설명: 포인터를 리턴 하는 함수 구현
*/

#include <stdio.h> //표준입출력라이브러리

double* mul(double *ap, double *bp); //함수의 원형

int main(int argc, char*argv[]) {
	double a, b; //2개의 double형 변수 선언
	double *res = NULL; //double형 포인터 변수 선언 후 null로 선언
	printf("두 개의 숫자를 입력하세요 : ");
	scanf_s("%lf%lf", &a, &b); //입력을 받음
	res = mul(&a, &b); //곱한 결과를 반환 받음
	printf("두 수의 곱은 : %.2lf\n", *res); //결과 출력
	return 0;
}

double* mul(double *ap, double *bp) { //곱셈 연산 수행하고 결과를 포인터로 돌려줌
	double rp; //연산 결과 저장 변수
	rp = *ap * *bp; //포인터를 이용해 곱셈 연산을 수행
	return &rp; //그리고 주소를 반환함
}
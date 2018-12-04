/*
실습 7
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 포인터를 이용해 배열 출력하기
*/

#include <stdio.h>

#define MAX_SIZE 10 //배열의 크기 지정

int main(void)
{
	/* 지역 변수 선언 */
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //배열 선언
	int *pWalk; //앞으로 가는 역할
	int *pEnd; //끝 지점을 지정

	/* 명령어 */
	   /* Print array forward */
	printf("Array forward : ");
	for (pWalk = ary, pEnd = ary + MAX_SIZE; pWalk < pEnd; pWalk++) 
		//pwalk는 앞으로 나가는 역할 그래서 배열 시작점에서 초기화. pEnd는 끝 점을 정의 그래서 배열의 끝점으로 초기화. 그래서 pWalk가 pEnd가 작아질 때 까지 반복하는 반복문
		printf("%3d", *pWalk);
	printf("\n");

	/* Print array backward */
	printf("Array backward: ");
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--)
		//pWalk를 하나씩 감소하면서 반복
		printf("%3d", *pWalk);
}
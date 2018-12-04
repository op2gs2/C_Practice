/*
실습 9
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 배열 요소에 2를 곱하기
*/

#include <stdio.h>
#define SIZE 5

/* 함수의 원형 */
void multiply(int *pAry, int size);

int main(void)
{
	/* 지역변수 선언 */
	int ary[SIZE]; //배열 선언
	int *pLast; //마지막 주소
	int *pWalk; //처음 주소

	/* 명령문 */
	pLast = ary + SIZE - 1; //마지막 주소 초기화
	for (pWalk = ary; pWalk <= pLast; pWalk++) //pWalk가 마지막 주소전 까지 반복
	{
		printf("정수를 입력해 주세요: ");
		scanf_s("%d", pWalk); //값을 대입
	} /* for */

	multiply(ary, SIZE); //여기서 값을 2배로 함
	printf("2배로 된 값은: \n");
	for (pWalk = ary; pWalk <= pLast; pWalk++)
		printf(" %3d", *pWalk);

	return 0;
} /* main */

/* ==================== multiply ====================
   Multiply elements in an array by 2
   배열의 원소에 2를 곱하기
	   Pre array has been filled
	   미리 배열에 값은 초기화 되어 있음
		   size indicates number of elements in array
		   size는 배열의 크기를 의미
	   Post values in array doubled
	   배열에 나중에 들어가는 값은 2배가 됨
*/
void multiply(int *pAry,
	int size)
{
	/* 지역변수 선언 */
	int *pWalk; //처음 주소
	int *pLast; //마지막 주소

	/* 명령문 */
	pLast = pAry + size - 1; //마지막 주소 초기화
	for (pWalk = pAry; pWalk <= pLast; pWalk++)
		*pWalk = *pWalk * 2; //값을 2배로
	return;
} /* multiply */

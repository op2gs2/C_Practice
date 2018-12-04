/*
실습 8
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 포인터를 이용해 배열 출력하는 부분을 함수로 만들기
*/

#include <stdio.h>
#define MAX_SIZE 10 //배열의 크기 지정

//함수의 원형
void Array_forward(int*, int*, int*);
void Array_backward(int*, int*, int*);

int main(void)
{
	/* 지역 변수 선언 */
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //배열 선언
	int *pWalk=NULL; //앞으로 가는 역할
	int *pEnd = NULL; //끝 지점을 지정

	Array_forward(ary, pWalk, pEnd);
	Array_backward(ary, pWalk, pEnd);

	return 0;
}

/* Print array forward */
void Array_forward(int *ptr, int*pWalk, int*pEnd) {
	printf("Array forward : ");
	for (pWalk = ptr, pEnd = ptr + MAX_SIZE; pWalk < pEnd; pWalk++)
		//pwalk는 앞으로 나가는 역할 그래서 배열 시작점에서 초기화. pEnd는 끝 점을 정의 그래서 배열의 끝점으로 초기화. 그래서 pWalk가 pEnd가 작아질 때 까지 반복하는 반복문
		printf("%3d", *pWalk);
	printf("\n");
}

/* Print array backward */
void Array_backward(int*ptr, int*pWalk, int*pEnd) {
	printf("Array backward: ");
	for (pWalk = (ptr+ MAX_SIZE) - 1; pWalk >= ptr; pWalk--)
		//pWalk를 하나씩 감소하면서 반복
		printf("%3d", *pWalk);
}
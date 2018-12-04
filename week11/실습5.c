/*
실습 5
작성일: 2018년 11월 15일
작성자: 김동영
프로그램 설명: 배열의 가장 큰 값의 메모리 주소 반환
*/

#include <stdio.h>

int* find_max(int* ptr); //함수의 원형

int main(void) {
	int arr[] = { 12,22,4,54,17,1,19,44,29,37 }; //배열 선언
	int *result = NULL; //반환된 값을 저장할 함수
	result = find_max(&arr); //함수 호출

	printf("가장 큰 값의 주소 값: %#p\n", result);
	return 0;
}

int* find_max(int* ptr) {
	int i, max=-123; //변수 선언. 제어변수, 큰 값의 인덱스 저장
	for (i = 0; i < 10; i++) { //배열 횟수만큼 iteration
		if (ptr[i] > max) { //만약 값이 max보다 크면
			max = i; //인덱스 저장
		}
	}

	return (ptr + max); //기본 위치 + 인덱스 위치 반환
}

/*
작성자: 김동영
작성일: 2018년 12월 06일
프로그램 설명: 동적 메모리 할당 실습
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int *ptr, int size);
void printArray(int *ptr, int size);

int main(void) {
	int size_arr = 0; //배열 원소 갯수 저장 변수
	int *dynamic_arr = NULL;
	printf("생성할 배열 원소의 갯수를 입력해주세요: ");
	scanf_s("%d", &size_arr);

	dynamic_arr = (int*)calloc(size_arr, 4); //메모리 할당
								 
	fillArray(dynamic_arr, size_arr);
	printArray(dynamic_arr, size_arr);

	free(dynamic_arr);//메모리 해제
	return 0;
}

void fillArray(int *ptr, int size) { //사용자가 입력한 숫자 사이로 랜덤한 값으로 배열을 채움
	int random_range = 0; //랜덤 범위를 저장하는 변수
	int i = 0; //반복문의 제어 변수
	printf("랜덤 범위를 지정해주세요: ");
	scanf_s("%d", &random_range);
	srand((unsigned)time(NULL)); //srand로 랜덤의 시드값 초기화
	for (;i < size;i++) { //위에서 초기화해서 초기식은 생략
		ptr[i] = (rand() % random_range) + 1; //랜덤 값을 배열에 대입
	}

}
void printArray(int *ptr, int size) { //배열의 내용을 출력
	int i = 0;
	printf("결과 출력\n");
	for (; i < size; i++) { //위에서 초기화 했으므로 초기식은 생략
		printf("dynamic_arr[%d]: %d\n", i, *(ptr + i));
	}
}
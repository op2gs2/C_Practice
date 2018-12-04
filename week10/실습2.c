/*
실습2
작성자: 김동영
작성일: 2018.11.06
프로그램 설명: 2차원 배열을 1차원 배열로 복사하는 프로그램
*/

#include <stdio.h>

/*함수의 원형*/
void copyArray(int[2][8]);

int main(int argc, char*argv[]) {
	int i, j; //제어변수 선언
	int cnt; //카운트 변수 선언
	int arr[2][8]; //이차원배열 선언
	int arr1[16]; //일차원 배열 선언
	int *temp;

	/*이차원 배열 초기화*/
	cnt = 1; //카운트 변수 초기화
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //배열 원소를 카운트 변수값으로 저장
			cnt++; //카운트 변수 증가
		}
	}

	copyArray(arr); //함수 호출

	return 0;
}

//배열을 1차원 배열 & 출력
void copyArray(int temp[2][8]) {
	int i, j; //제어변수 선언
	int cnt; // 결과 배열 첨자
	cnt = 0; //0으로  초기화
	int result[16] = { 0 }; //결과 배열 선언 및 초기화

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 8; j++) {
			result[cnt] = temp[i][j]; //1차원 배열로 복사 후
			printf("%d \t", result[cnt]); //출력
			cnt++; //1차원 배열의 첨자를 증가
		}
	}
}
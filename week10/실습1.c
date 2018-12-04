/*
실습1
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 2차원 배열의 값을 저장하고 출력하는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리

//함수의 원형
void printArray(int arr[][8]);

int main(int argc, char* argv[]) {
	int i, j; //제어변수 선언
	int cnt; //카운트 변수 선언
	cnt = 1; //카운트는 1부터 시작
	int arr[2][8] = { 0 }; //배열 선언 및 초기화

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //배열에 카운트 값 저장
			cnt++; //카운트 값 증가
		}
	}
	printArray(arr);
	return 0;
}

void printArray(int arr[][8]) { //배열을 출력해주는 함수
	int i, j; //제어변수 선언
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			printf("[%d][%d] : %d ", j, i, arr[j][i]); //배열 내용 출력
		}
		printf("\n");
	}
}
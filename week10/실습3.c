/*
실습3
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 2차원 배열 각 행과 열의 합을 계산 저장하는 함수 작성
*/

#include <stdio.h> //표준입출력라이브러리

/*함수의 원형*/
void sumArray(int arr[][5], int rowSum[], int colSum[]);
void printArray(int arr[][5], int rowSum[], int colSum[]);

int main(int argc, char* argv[]) {
	int arr[5][5] = { 0 };
	int rowSum[5] = { 0 };
	int colSum[5] = { 0 };

	int i, j; //제어변수 선언
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = (i + j) - i + j - i + 23;
		}
	}
	sumArray(arr, rowSum, colSum);
	printArray(arr, rowSum, colSum);
	return 0;
}

void sumArray(int arr[][5], int rowSum[], int colSum[]) {
	int i, j; //제어변수 선언

	/*행 값 계산*/
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			rowSum[i] += arr[j][i];
			colSum[j] += arr[i][j];
		}
	}
}

void printArray(int arr[][5], int rowSum[], int colSum[]) {
	int i, j; //제어변수 선언
	/*행 값 계산*/
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("%d\n", colSum[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", rowSum[i]);
	}
}
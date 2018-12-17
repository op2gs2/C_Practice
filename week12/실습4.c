/*
실습4
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 이차원 행렬의 각 행과 열의 합을 계산하는 프로그램
*/

#include <stdio.h>

void sumarray(int arr[][5], int rowsum[], int colsum[]); //함수의 원형

int main(void) {
	int array[][5] = { {1,2,3,4,5}
	,{1,2,3,4,5}
	,{2,3,4,5,6}
	,{2,3,4,5,6}
	,{3,4,5,6,7} }; //2차원 배열 선언
	int rowsum[5] = { 0 }; //열을 더함
	int colsum[5] = { 0 }; //행을 더함
	int i, j; //반복문의 제어 변수 (variable for iteration)
	sumarray(array,rowsum,colsum); //함수의 호출

	//배열을 출력. 행과 열의 합도 출력
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", array[i][j]); //배열 출력
		}
		printf("%d\n", rowsum[i]); //행의 합 출력
	}
	for (i = 0; i < 5; i++) {
		printf("%d\t", colsum[i]); //열의 합 출력
	}
}

void sumarray(int arr[][5], int rowsum[], int colsum[]) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			rowsum[i] += arr[i][j]; //행의 합을 구함
			colsum[i] += arr[j][i]; //열의 합을 구함
		}
	}
}

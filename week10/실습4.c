/*
실습4
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 2차원 배열을 버블 정렬 한 뒤에 출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char*argv[]) {
	int arr[][6] = { {2,3,1,4,5,7},{4,6,3,2,1,5},{1,2,6,7,3,4} }; //배열 선언
	int i, j, k; //반복문 제어변수 선언
	int temp; //임시 저장 변수

	//bubble sort
	for (k = 0; k < 3; k++) {
		for (i = 0; i < 6; i++) { // 0 ~ (i-1)까지 반복
			for (j = 0; j < (6 - (i + 1)); j++) { // j번째와 j+1번째의 요소가 크기 순이 아니면 교환
				if (arr[k][j] > arr[k][j + 1]) {
					temp = arr[k][j];
					arr[k][j] = arr[k][j + 1];
					arr[k][j + 1] = temp;
				}
			}
		}
	}

	//print
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
/*
실습5
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 저장된 배열의 값을 버블 정렬하고 출력하는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리

//함수의 원형
void bubble_sort(int list[]);
void arrayPrint(int list[]);

int main(int argc, char* argv[]) {
	int oneDim[10] = { 1 , 9 , 2 , 8 , 3 , 7 , 4 , 6 , 5 , 0 }; //배열 선언

	bubble_sort(oneDim);// 버블 정렬 수행
	arrayPrint(oneDim); //배열 출력

	return 0;
}


void bubble_sort(int list[]) { // 버블 정렬
	int i, j, temp; //제어변수 및 임시 변수 선언

	for (i = 0; i < 10; i++) { // 0 ~ (i-1)까지 반복
		for (j = 0; j < (10 - (i + 1)); j++) { // j번째와 j+1번째의 요소가 크기 순이 아니면 교환
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void arrayPrint(int list[]) { //배열 내 정렬된 내용 출력
	int i; //제어변수 선언
	for (i = 0; i < 10; i++) {
		printf("%d\t", list[i]);
	}
}
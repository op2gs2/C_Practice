/*
실습1
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 배열을 출력하거나, 배열 원소의 합을 구하는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리

//함수의 원형
void printArray(int arr[]);
int sumArray(int arr[]);

int main(int argc, char* argv[]) {
	int arr[] = { 4,2,3,1,4,5,6,7,4,3 }; //배열 선언
	int sum; //배열의 합을 받는 변수 선언

	/*결과 출력*/
	printf("출력결과 >\n");
	printf("배열의 값\n");
	printArray(arr); //배열을 출력해줌

	printf("배열의 총 합\n");
	sum = sumArray(arr); //배열의 합을 가져옴

	printf("배열의 합 : %d\n", sum);
	return 0;
}

void printArray(int arr[]) { //배열을 출력해주는 함수
	int i;    //제어 변수 선언
	for (i = 0; i < 10; i++) { //배열을 방문하는 반복문
		printf("배열[%d] = %d\n", i, arr[i]); //방문하여 출력
	}
}

int sumArray(int arr[]) {
	int i; int result; //제어 변수와 누적합 값을 저장하는 변수 선언
	result = 0; //누적합 변수에는 초기화가 선행되어애 함
	for (i = 0; i < 10; i++) { //배열을 방문하는 반복문
		result += arr[i]; //방문하여 누적합 구함
	}

	return result; //누적합 결과 반환
}
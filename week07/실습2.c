/*
실습2
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 배열을 0으로 초기화 후, 피보나치 수열을 저장하고 출력하는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리

/*함수의 원형*/
void printArray(int arr[]);
void serFiboArray(int arr[]);

int main(int argc, char* argv[]) {
	int arr[10] = { 0 }; //선언과 동시에 배열을 0으로 초기화

	serFiboArray(arr); //배열에 피보나치 값 저장

	printf("피보나치 수열 출력: \n");
	printArray(arr); // 배열 내 값을 출력

	return 0; //프로그램 종료
}

void serFiboArray(int arr[]) { //피보나치 수열을 계산하고 저장하는 함수
	int i; //for문 반복 횟수
	int head = 0; //앞
	int mid = 0; //중간
	int rear = 1; //뒤

	for (i = 0; i < 10; i++) {
		arr[i] = head; //피보나치 값을 저장
		/*값을 이동시키기*/
		mid = head + rear;
		head = rear;
		rear = mid;

	}
}

void printArray(int arr[]) { //배열을 출력해주는 함수
	int i;	//제어 변수 선언
	printf("[ ");
	for (i = 0; i < 10; i++) { //배열을 방문하는 반복문
		printf("%d\t", arr[i]); //방문하여 출력
	}
	printf(" ]");
}




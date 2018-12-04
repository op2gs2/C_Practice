/*
실습3
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 배열 입력 & 출력 & 값 찾는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리

/*함수의 원형*/
void input_f(int arr[]);
void print_f(int arr[]);
int find_array(int arr[], int key);

int main(int argc, char* argv[]) {
	int arr[10]; //배열 선언
	int find; //찾으려는 값을 저장하는 변수 선언
	int where; //찾는 값의 위치 저장
	input_f(arr); //입력 받음
	print_f(arr); //출력함

	printf("\n찾으려는 값을 입력해 주세요");
	scanf_s("%d", &find); //찾으려는 값 입력 받고

	where = find_array(arr, find); //위치를 잧음
	printf("찾으려는 값의 위치는 %d번째 입니다.", (where + 1));
	return 0;
}

void input_f(int arr[]) {
	int i; //제어 변수
	for (i = 0; i < 10; i++) {
		printf("값을 입력해 주세요: (%d번 남음)", 10 - i);
		scanf_s("%d", &arr[i]); //해당 번째 위치에 값을 넣음
	}
}


void print_f(int arr[]) {
	int i; //제어 변수
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]); //해당 번째 위치에서 값을 출력함
	}
}

int find_array(int arr[], int key) {
	int i; //제어 변수
	for (i = 0; i < 10; i++) {
		if (key == arr[i]) { //만약 찾으려는 값이 해당 번째 위치의 값과 같다면,
			return i; //해당 번째를 반환
		}
	}
	printf("해당하는 키를 찾지 못했습니다."); //아니면,
	return -1; //전혀 다른 값을 출력
}
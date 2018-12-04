/*
실습4
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 난수 배열을 이용해 난수를 저장하고 출력하는 프로그램
*/

#include <stdio.h> //표준입출력라이브러리
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int arr[6] = { 0 }; //배열 선언 및 0으로 초기화
	int ran_check[45] = { 0 }; //난수 체크 배열 선언 및 0으로 초기화

	srand(time(NULL)); //난수 시드 값 변경

	int i; int ran; //제어변수와 난수 저장 변수 선언
	ran = -1; //난수 저장 변수를 -1로 초기화

	for (i = 0; i < 6; i++) {
		ran = rand() % 45 + 1; //난수 생성
		if (ran_check[ran] != 1) { //난수 체크 배열에서 걸리지 않으면
			arr[i] = ran; //난수를 넣고
			ran_check[ran] = 1; //난수값에 해당하는 난수 체크배열 인덱스를 넣어줌
			printf("%d\t", arr[i]); //그리고 출력
		}
		else { //걸리면
			do {
				ran = rand() % 45 + 1; //난수 생성
			} while (ran_check[ran] == 1); //난수 체크 배열이 1이 아닐때 까지 돌기
			arr[i] = ran; //난수를 넣고
			ran_check[ran] = 1; //난수값에 해당하는 난수 체크배열 인덱스를 넣어줌
			printf("%d\t", arr[i]); //그리고 출력
		}
	}

	return 0;
}
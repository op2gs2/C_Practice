/*
작성자: 김동영
작성일: 2018년 12월 06일
프로그램 설명: 일차원 배열을 동적 할당된 이차원 배열로 복사하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

void copy_array(int *ptr, int**two_ptr, int size_arr);

int main(void) {
	int *arr_one_dimension = NULL; //일차원 배열공간에 대한 포인터
	int size_arr = 0; //배열의 크기 지정
	int i = 0; //반복문의 제어변수
	
	int **arr_two_dimension = NULL; //이차원 배열공간에 대한 포인터

	//짝수범위로 배열의 크기를 입력 받고, 확인하며, 틀리면 다시 입력 받도록 하는 프로그램
	while (1) {
		printf("배열의 크기를 입력해주세요. 단, 짝수크기 만큼만 입력해주세요.");
		scanf_s("%d", &size_arr);
		if (size_arr % 2 == 0) {
			break;
		}
		printf("짝수 범위로 다시 입력해주세요.");
	}

	arr_one_dimension = calloc(size_arr, 4); //일차원 배열 공간 할당
	
	//배열의 값을 입력함
	for (; i < size_arr; i++) {
		printf("배열 값을 입력");
		scanf_s("%d", &arr_one_dimension[i]);
	}

	copy_array(arr_one_dimension, arr_two_dimension, size_arr);

}

void copy_array(int *ptr, int**two_ptr, int size_arr) {
	int size_two_arr = 0; //이차원 배열의 세로 크기 지정
	int width = 0; //배열의 가로 크기를 지정
	int i = 0; //반복문 제어 변수
	int j = 0; //반복문 제어 변수
	int cnt = 0; //일차원 배열의 인덱스를 가르키기 위함

	printf("2차원 배열의 크기를 입력해주세요.");
	scanf_s("%d", &size_two_arr);

	//가로 길이 계산하기. 만약에 세로길이 만큼 2차원 배열이 나누어 떨어지면 그대로, 아니면 그냥 공간 하나를 더 추가해 저장해준다.
	if (size_arr % size_two_arr != 0) {
		width = size_two_arr + 1; //나누어 떨어지지 않으므로, 남는것이 생기게 됨. 그래서 공간을 하나라도 더 만들어 준다.
	}
	else {
		width = size_two_arr; //나누어 떨어지면 그 만큼만 쓰면 됨.
	}
	
	//이차원 배열 만들기
	two_ptr = (int**)malloc(sizeof(int*) * size_two_arr);
	for (;i < size_two_arr; i++) {
		two_ptr[i] = (int*)malloc(sizeof(int*)*width);
	}
	
	//일차원 배열을 이차원 배열로 복사하기. 이때, 일차원 배열만큼을 복사하고 나면 0으로 채워준다.
	for (i = 0; i < (size_two_arr); i++) {
		for (j = 0;j < width; j++) {
			if (cnt < size_arr) {
				two_ptr[i][j] = ptr[cnt];
				cnt += 1;
			}
			else {
				two_ptr[i][j] = 0;
				cnt += 1;
			}
		}
	}

	//2차원 배열 출력
	printf("2차원 배열 출력: \n");
	for (i = 0; i < (size_two_arr); i++) {
		for (j = 0;j < width; j++) {
			printf("two_ptr[%d][%d]: %d\t",i,j,two_ptr[i][j]);
		}
		printf("\n");
	}
}
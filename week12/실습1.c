/*
실습1
작성자: 김동영
작성일: 2018년 11월 22일
프로그램 설명: 배열의 값을 양수 음수 판별
*/

#include <stdio.h>

int sumarray(int arr[], int size,int*sum);
void printarray(int arr[], int size,int *sum);

int main(void) {
	//배열 및 변수 선언
	int array[10] = { 1,-1,-1,1,-1,1,-1,0,-1,1 };
	int sum = 0;

	//함수 호출
	sumarray(array, 10, &sum); //합과 양.음수 여부 반환
	printarray(array, 10, &sum); //배열 내용 출력

	return 0;
}

int sumarray(int arr[], int size , int *sum) {

	//합을 계산
	*sum += arr[0];

	//양.음수 판별
	if (*sum > 0)
		return 1;
	else if (*sum < 0)
		return -1;
	else
		return 0;

}

void printarray(int arr[], int size, int *sum) { //배열 내용을 출력 등. 각종 사항 출력
	//배열 원소 출력
	printf("배열을 출력");
	int i;
	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}
	printf_s("\n");

	//배열의 합 출력
	printf("배열의 합의 값은 %d입니다. \n",*sum);
	printf("따라서, ");
	if (*sum > 0)
		printf("양수 입니다.");
	else if (*sum < 0)
		printf("음수 입니다.");
	else
		printf("0 입니다.");
}
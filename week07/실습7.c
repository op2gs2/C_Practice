/*
실습7
작성자: 김동영
작성일: 2018.10.31
프로그램 설명: 2차원 배열을 1차원 배열로 복사하거나
		1차원 배열 선택 정렬
		특정 값을 이진 검색하는프로그램
*/

#include <stdio.h>

/*함수의 원형*/
int copyArray(int[2][8], int, int);
void selectionSort(int[]);
int binarySearch(int[], int);

int main(int argc, char*argv[]) {
	int i, j; //제어변수 선언
	int cnt; //카운트 변수 선언
	int arr[2][8]; //일차원배열 선언
	int arr1[16]; //이차원 배열 선언

	/*이차원 배열 초기화*/
	cnt = 1; //카운트 변수 초기화
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 2; j++) {
			arr[j][i] = cnt; //배열 원소를 카운트 변수값으로 저장
			cnt++; //카운트 변수 증가
		}
	}

	/*이차원 -> 일차원*/
	//인덱스 7까지만 넣고
	for (i = 0; i < 8; i++) {
		arr1[i] = copyArray(arr, 0, i);
	}
	//인덱스 15까지 넣음
	for (i = 8; i < 16; i++) {
		arr1[i] = copyArray(arr, 1, (i - 8));
	}

	/*이진 탐색: 값을 찾음*/
	printf("찾을 값을 알려주세요:");
	scanf_s("%d", &i);
	printf("찾으시는 값은 %d번째에 있습니다", binarySearch(arr1, i));

	return 0;
}

//배열을 1차원 배열로
int copyArray(int temp[2][8], int cnt1, int cnt2) {
	return temp[cnt1][cnt2];
}

//선택 정렬
void selectionSort(int data[]) {
	//오름차순 (작은 수 -> 큰 수)
	int indexMin, temp;
	for (int i = 0; i < 15; i++)
	{
		//중요
		indexMin = i;
		for (int j = i + 1; j < 16; j++)
		{
			if (data[j] < data[indexMin])
			{    //data[indexMin]을 기준으로 data[j]를 검사한다.
				//data[indexMin]의 값 보다 작은 값을 발견시 indexMin = j가 된다.
				indexMin = j;
			}
		}
		//내부 for문의 반복으로 가장 작은 값을 찾으면 순서를 바꾼다.
		temp = data[indexMin];
		data[indexMin] = data[i];
		data[i] = temp;
	}
}

//이진 탐색
int binarySearch(int ar[], int target) {
	// 찾는 숫자가 있으면 찾는 숫자의 인덱스 리턴 없으면 -1 리턴
	int first = 0;
	int last = 15;
	int mid = 0;

	// first와 last가 같은 경우까지 반복하는 이유
	// while(first < last)이면 마지막 하나가 남았을때
	// 검사하지 않고 종료되기 때문이다.
	while (first <= last) {
		mid = (first + last) / 2;
		if (ar[mid] == target) {
			return mid;
		}
		else {
			if (ar[mid] > target)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}
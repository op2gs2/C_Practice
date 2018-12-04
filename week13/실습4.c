/*
작성자: 김동영
작성일: 2018년 11월 29일
프로그램 설명: 구조체를 선언하고 구조체 배열의 크기가 3인 배열에 사용자로부터 값을 입력 받고, 입력 받은 내용을 출력하는 프로그램 작성
구조체 배열 연습
*/

#include <stdio.h>

int main(void) {
	struct Person
	{
		char name[10];
		int age;
		struct  phone
		{
			char home_num[14];
			char mobile_num[14];
		}number;
	};

	struct Person p[3];

	/*입력 받기*/
	int i, j; int size = sizeof(p) / sizeof(p[0]); //반복문에 필요한 변수 선언 //제어 변수와 사이즈 값 저장 변수
	for (i = 0; i < size; i++) {
		printf_s("\n이름 입력: ");
		scanf_s("%s", p[i].name , 10); //scanf_s는 문자열을 입력받을 경우에, 크기를 지정해줘야 함.
		
		printf_s("나이 입력: ");
		scanf_s("%d", &p[i].age);
		
		printf_s("집 전화번호 입력: ");
		scanf_s("%s", p[i].number.home_num, 14); //scanf_s는 문자열을 입력받을 경우에, 크기를 지정해줘야 함.

		printf_s("핸드폰 번호 입력: ");
		scanf_s("%s", p[i].number.mobile_num, 14); //scanf_s는 문자열을 입력받을 경우에, 크기를 지정해줘야 함.

		printf_s("=========================================================================================================");
	}

	/*출력 하기*/
	printf_s("\n결과 출력하기\n");
	printf_s("=========================================================================================================\n");
	for (i = 0; i < size; i++) {
		printf_s("\n이름 출력: %s",p[i].name);
		printf_s("\n");
		printf_s("나이 출력: %d", p[i].age);
		printf_s("\n");
		printf_s("집 전화번호 출력: %s", p[i].number.home_num);
		printf_s("\n");
		printf_s("핸드폰 번호 출력: %s", p[i].number.mobile_num);
		printf_s("\n");
		printf_s("=========================================================================================================");
	}

}
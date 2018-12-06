/*
작성자: 김동영
작성일: 2018년 12월 06일
프로그램 설명: enum 연습
*/

/*
enum은 표준 정수에 기반을 둔 사용자 정의 형식. 열거형에서 각 정수 값은 열거 상수라고 불리는 식별자이다. 이렇게 숫자를 기호로 표현하게 되면 좀더 읽기 쉬운 프로그램이 된다.
*/

#include <stdio.h>

int main(void) {
	int channel = 0; //사용자로부터 채널 정보를 입력 받기 위한 변수
	enum TV { fox = 2, nbc = 4, cbs = 5, abc = 11, hbo = 15, show = 17, max = 31, espn = 39, cnn = 51 }; //열거형 선언
	printf("Here are my favorite cable stations: \n");
	printf("ABC: \t%2d\n", abc);
	printf("CBS: \t%2d\n", cbs);
	printf("CNN: \t%2d\n", cnn);
	printf("ESPN: \t%2d\n", espn);
	printf("FOX: \t%2d\n", fox);
	printf("HBO: \t%2d\n", hbo);
	printf("MAX: \t%2d\n", max);
	printf("NBC: \t%2d\n", nbc);
	printf("SHOW: \t%2d\n", show);
	printf("select channel");
	scanf_s("%d", &channel); //사용자로부터 값을 입력 받음

	switch (channel) { //입력 받은 값에 따라 다른 문자열을 출력함
	case abc:
		printf("ABC channel");
		break;
	case cbs:
		printf("CBS channel");
		break;
	case cnn:
		printf("CNN channel");
		break;
	case espn:
		printf("ESPN channel");
		break;
	case fox:
		printf("FOX channel");
		break;
	case hbo:
		printf("HBO channel");
		break;
	case max:
		printf("MAX channel");
		break;
	case nbc:
		printf("NBC channel");
		break;
	case show:
		printf("SHOW channel");
		break;
	default:
		printf("no service");
	}
	return 0;
}
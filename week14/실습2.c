/*
작성자: 김동영
작성일: 2018년 12월 06일
프로그램 설명: 공용체 연습
*/

/*
공용체는 메모리에서 서로 다른 데이터 형식을 공유 할 수 있도록 하는 개념이다. 이때 메모리 크기는 가장 큰 자료형에 맞춰진다.
*/

#include <stdio.h>

int main(void) {
	union
	{
		short num;
		char chAry[2];
	}data;

	data.num = 16706;

	printf("short %hd\n", data.num);
	data.chAry[0] = 'A';
	data.chAry[1] = 'B';
	//더 이상 data.num에 해당하는 값은 사용할 수 없다.
	printf("Ch[0] : %c\n", data.chAry[0]);
	printf("Ch[1] : %c\n", data.chAry[1]);
	printf("short %hd\n", data.num);//이전에 문자 배열이 공용체 공간을 사용했기에 기존에 있던 데이터는 날라감
	return 0;
}
/*
�ۼ���: �赿��
�ۼ���: 2018�� 12�� 06��
���α׷� ����: enum ����
*/

/*
enum�� ǥ�� ������ ����� �� ����� ���� ����. ���������� �� ���� ���� ���� ������ �Ҹ��� �ĺ����̴�. �̷��� ���ڸ� ��ȣ�� ǥ���ϰ� �Ǹ� ���� �б� ���� ���α׷��� �ȴ�.
*/

#include <stdio.h>

int main(void) {
	int channel = 0; //����ڷκ��� ä�� ������ �Է� �ޱ� ���� ����
	enum TV { fox = 2, nbc = 4, cbs = 5, abc = 11, hbo = 15, show = 17, max = 31, espn = 39, cnn = 51 }; //������ ����
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
	scanf_s("%d", &channel); //����ڷκ��� ���� �Է� ����

	switch (channel) { //�Է� ���� ���� ���� �ٸ� ���ڿ��� �����
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
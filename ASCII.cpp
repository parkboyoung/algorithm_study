#include<iostream>
using namespace std;
//새로운 언어를 익힐때는 이런 순서로 익히는 것이 좋을 것이다.
//binary(2진수) : 0,1 / byte 8개 bit로 구성 0~255
//type 정확히 하는 것 중요 -> ASCII코드 A=65 a=97 0 = 48 ~ 57
int main()
{
	//정수형으로 48로 하고 char형으로 0~9까지 출력
	int num = 48;
	for (int i = 0; i < 10; i++)
	{
		cout << (char)(num + i) << endl;

	}
}
/* C로 구현*/
/*
#include<stdio.h>
int main()
{
	int num = 48;
	for (int i = 0; i < 9; i++)
	{
		printf("%c\n", num + i);
	}
}
*/


#include<iostream>
using namespace std;
//���ο� �� �������� �̷� ������ ������ ���� ���� ���̴�.
//binary(2����) : 0,1 / byte 8�� bit�� ���� 0~255
//type ��Ȯ�� �ϴ� �� �߿� -> ASCII�ڵ� A=65 a=97 0 = 48 ~ 57
int main()
{
	//���������� 48�� �ϰ� char������ 0~9���� ���
	int num = 48;
	for (int i = 0; i < 10; i++)
	{
		cout << (char)(num + i) << endl;

	}
}
/* C�� ����*/
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


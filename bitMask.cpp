//a��� �������� n��° bit�� 1�� ���θ� Ȯ���ϴ� ����
//a=11, 4��° �ڸ� bit�� 0���� 1������ ����Ͻÿ� 
//and�����̶� shift ������ ����ؼ� �̿�
#include<iostream>
using namespace std;

bool nthbitOne(int x, int y)
{
	if ((x & (1 << (y - 1))))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	if (nthbitOne(11, 3) == true)
	{
		printf("1�Դϴٿ�\n");
	}
	else
	{
		printf("0�Դϴٿ�\n");
	}
}
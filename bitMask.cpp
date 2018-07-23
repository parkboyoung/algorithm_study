//a라는 정수에서 n번째 bit가 1인 여부를 확인하는 문제
//a=11, 4번째 자리 bit가 0인지 1인지를 출력하시오 
//and연산이랑 shift 연산을 사용해서 이용
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
		printf("1입니다요\n");
	}
	else
	{
		printf("0입니다요\n");
	}
}
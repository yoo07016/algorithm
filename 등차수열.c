#include<stdio.h>

void total_sum_6(int sum) // 사용자가 입력한 수 만큼끼리 더함
{
	int num = 0, su = 2;
	for (int i = 1; i <= sum; i++)
	{
		num += su;
		su += 6;
	}
	printf("%d\n", num);
}
int main()
{
	total_sum_6(200);
	return 0;
}
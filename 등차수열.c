#include<stdio.h>

void total_sum_6(int sum) // ����ڰ� �Է��� �� ��ŭ���� ����
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
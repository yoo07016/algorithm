#include<stdio.h>

void total_sum_pibo(int sum) // ����ڰ� �Է��� �� ��ŭ���� ����
{
	int num = 0, su = 0, a = 1, b = 1;
	for (int i = 1; i <= sum; i++)
	{
		su = a + b;
		num += su;
		a = b;
		b = su;
	}
	printf("%d\n", num);
}

int main()
{
	total_sum_pibo(50);
	return 0;
}
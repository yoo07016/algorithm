#include <stdio.h>

void total_sum(int sum) // ����ڰ� �Է��� �� ��ŭ���� ����
{
	int num = 0;
	for (int i = 1; i <= sum; i++)
	{
		num += i;
	}
	printf("%d\n", num);
}
int main()
{
	total_sum(100);
	return 0;
}
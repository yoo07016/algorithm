#include <stdio.h>
//���ڰ� �ʹ� Ŀ�� unsigned�� ���ľ���
void total_sum_emdql(int sum) // ����ڰ� �Է��� �� ��ŭ���� ����
{
	int num = 0, su = 2;
	for (int i = 1; i <= sum; i++)
	{
		num += su;
		su *= 3;
	}
	printf("%d\n", num);
}
int main()
{
	total_sum_emdql(200);
	return 0;
}
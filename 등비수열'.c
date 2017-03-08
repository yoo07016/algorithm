#include <stdio.h>
//숫자가 너무 커서 unsigned로 고쳐야함
void total_sum_emdql(int sum) // 사용자가 입력한 수 만큼끼리 더함
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
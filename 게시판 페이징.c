#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0, m = 0, page = 1;
	printf("�Խù� ��: ");
	scanf("%d", &m);
	printf("������ �� �Խù� ��: ");
	scanf("%d", &n);

	/*page = m / n;								//2��° ���
	if (m % n != 0)
		++page;

	printf("%d\n", page);*/

	page = m / n;
	printf("�� %0.f������\n", ceil(page));		//ceil=�Ҽ��� ���� ��� �ø�
}
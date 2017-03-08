#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0, m = 0, page = 1;
	printf("게시물 수: ");
	scanf("%d", &m);
	printf("페이지 당 게시물 수: ");
	scanf("%d", &n);

	/*page = m / n;								//2번째 방법
	if (m % n != 0)
		++page;

	printf("%d\n", page);*/

	page = m / n;
	printf("총 %0.f페이지\n", ceil(page));		//ceil=소수점 이하 모두 올림
}
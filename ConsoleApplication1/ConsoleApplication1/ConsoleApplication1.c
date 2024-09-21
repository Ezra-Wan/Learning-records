#pragma warning(disable:4996)
#pragma warning(once:4996)
#include <stdio.h>
long long qpow(long long x, long long y)
{
	if (y == 0)
		return 1;
	else if (y % 2 == 1)
		return qpow(x, y - 1) * x;
	else
	{
		long long temp = qpow(x, y / 2);
	return temp * temp;
	};
}
int main()
{
	printf("----------正整数幂运算----------\n（请按下回车确认）\n");

	int input;
	start:
		{
			long long a;
			long long b;
			long long max = 0 - 9223372036854775808;
			printf("底数=");
			scanf("%lld", &a);
			 if (a == 0)
			{
				printf("底数不能为零,请重新输入\n");
				goto start;
			}
			printf("指数=");
			scanf("%lld", &b);
			long long  ans = qpow(a, b);
			if ((ans <= 0) || (ans == max))
			{
				printf("您输入的值过大,请重新输入\n");
				goto start;
			}
			else
			{
				printf("幂运算的结果为%lld\n==========================\n", ans);
			}
		}

		while((input=getchar())!='\n'&&input != EOF);
		printf("按0重新执行，按其他键退出");
		
		input = getchar();

		if ( input == 48 )
		{
			goto start;
		}
		else
		{
			return 0;
		}

}
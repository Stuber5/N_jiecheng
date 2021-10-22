#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int n = 10;//需求阶乘变量
	int i = 0;//阶乘循环变量
	int z = 1;
	int sum = 0;

	/*printf("请输入需要求阶乘的数:>");
	scanf("%d", &n);*/

	for (i = 1; i <= n; i++)
	{
		z *= i;
		sum += z;
	}
	//printf("%d的阶乘>:%d\n", n, z);
	printf("1!->10!和为>:%d\n", sum);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()

{
	int n = 10;//����׳˱���
	int i = 0;//�׳�ѭ������
	int z = 1;
	int sum = 0;

	/*printf("��������Ҫ��׳˵���:>");
	scanf("%d", &n);*/

	for (i = 1; i <= n; i++)
	{
		z *= i;
		sum += z;
	}
	//printf("%d�Ľ׳�>:%d\n", n, z);
	printf("1!->10!��Ϊ>:%d\n", sum);

	return 0;
}
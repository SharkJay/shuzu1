#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	srand(time(NULL));//设置种子，time函数是获取当前时间参数NULL是固定写法
	int i = rand();//获取随机数
	printf("%d\n", i);

	system("pause");
	return 0;
}
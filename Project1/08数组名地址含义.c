#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main08() {

	//定义一个数组
	int a[10];
	//打印索引为0的第一个元素的首地址，无符号十进制形式打印
	printf("%u\n", &a[0]);
	//打印数组a的地址，在数值上等于第一个元素的首地址
	printf("%u\n", &a);
	printf("%u\n", a);



	printf("%u\n", &a[0] + 1);
	printf("%u\n", &a + 1);
	printf("%u\n", a + 1);

	
	system("pause");
	return 0;
}
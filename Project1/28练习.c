#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main28() {

	//首先字符数组ch1要初始化一个足够的内存空间，用来存放ch2的字符
	char ch1[1024] = "hello";
	char ch2[] = "world";//ch2可以不初始化[]中的元素个数

	//将字符数组ch1与ch2拼接成一个整体
	int i = strlen(ch1);//计算ch1数组中的有效字符个数，i=5
	int j = 0;
	while (ch2[j] != 0) {
		ch1[i] = ch2[j];
		j++;
		i++;
	}

	puts(ch1);
	system("pause");
	return 0;
}
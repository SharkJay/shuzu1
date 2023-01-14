#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main21() {

	/*char ch = '0';
	printf("%c\n", ch);*/

	//创建一个容量128的字符串数组，将其中元素全部清零，用于存放接下来手动输入的字符串
	//char ch[128] = { 0 };//也可以char ch[128] = "";
	char ch[128] = "\0";
	//数组名ch代表数组首元素地址，等价于数组地址，因此不需要取地址符&，直接写上数组名就可以，而且数组名是一个地址常量
	scanf("%s", ch);
	printf("%s\n", ch);
	system("pause");
	return 0;
}
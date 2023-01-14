#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main25() {

	//创建字符数组并且清零
	char ch[1024] = { 0 };
	//fgets，参数一：输入的参数存放到ch数组中；参数二：最大输入多少个字符；参数三：从标准输入键盘输入
	fgets(ch, sizeof(ch), stdin);
	//strlen库函数，计算字符数组共计有多少有效字符，减一即为最后一个有效字符\n在数组中的索引，令\n等于0，达到去除\n的效果
	ch[strlen(ch) - 1] = 0;
	printf("%s\n", ch);

    /*数字0(和字符‘\0’等价)结尾的char数组就是一个字符串，
	但如果char数组没有以数字0结尾，那么就不是一个字符串，只是普通字符数组，所以字符串是一种特殊的char的数组。*/

	/*char ch[1024] = "helloA";
	int i = 0;
	while (ch[i] != '\0') {
		i++;
	}*/
	//printf("%d\n", i);
	system("pause");
	return 0;
}
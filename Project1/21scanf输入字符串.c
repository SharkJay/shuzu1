#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main21() {

	/*char ch = '0';
	printf("%c\n", ch);*/

	//����һ������128���ַ������飬������Ԫ��ȫ�����㣬���ڴ�Ž������ֶ�������ַ���
	//char ch[128] = { 0 };//Ҳ����char ch[128] = "";
	char ch[128] = "\0";
	//������ch����������Ԫ�ص�ַ���ȼ��������ַ����˲���Ҫȡ��ַ��&��ֱ��д���������Ϳ��ԣ�������������һ����ַ����
	scanf("%s", ch);
	printf("%s\n", ch);
	system("pause");
	return 0;
}
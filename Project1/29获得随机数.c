#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

	srand(time(NULL));//�������ӣ�time�����ǻ�ȡ��ǰʱ�����NULL�ǹ̶�д��
	int i = rand();//��ȡ�����
	printf("%d\n", i);

	system("pause");
	return 0;
}
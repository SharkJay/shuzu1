#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main08() {

	//����һ������
	int a[10];
	//��ӡ����Ϊ0�ĵ�һ��Ԫ�ص��׵�ַ���޷���ʮ������ʽ��ӡ
	printf("%u\n", &a[0]);
	//��ӡ����a�ĵ�ַ������ֵ�ϵ��ڵ�һ��Ԫ�ص��׵�ַ
	printf("%u\n", &a);
	printf("%u\n", a);



	printf("%u\n", &a[0] + 1);
	printf("%u\n", &a + 1);
	printf("%u\n", a + 1);

	
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main28() {

	//�����ַ�����ch1Ҫ��ʼ��һ���㹻���ڴ�ռ䣬�������ch2���ַ�
	char ch1[1024] = "hello";
	char ch2[] = "world";//ch2���Բ���ʼ��[]�е�Ԫ�ظ���

	//���ַ�����ch1��ch2ƴ�ӳ�һ������
	int i = strlen(ch1);//����ch1�����е���Ч�ַ�������i=5
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
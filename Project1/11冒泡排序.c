#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main11() {

	//����һ������
	int arr[] = { 2,5,6,-1,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//��һ��forѭ�������������
	for (int i = 0; i < n - 1; i++) {
		//�ڶ���forѭ����ÿ�������еĶԱȴ���
		for (int j = 0; j < n - 1 - i; j++) {
			//
			if (arr[j] > arr[j + 1]) {
				int tem = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
			}
		}
	}

	//��������������
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main12() {

	//����һ��3��4�еĶ�ά����
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	//Ԫ���ܸ���
	int n = sizeof(arr) / sizeof(arr[0][0]);
	//����
	int h = sizeof(arr) / sizeof(arr[0]);
	//����
	int l = sizeof(arr[0]) / sizeof(arr[0][0]);

	printf("%d %d %d\n", n, h, l);

	//������ά����
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
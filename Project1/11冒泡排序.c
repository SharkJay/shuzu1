#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main11() {

	//定义一个数组
	int arr[] = { 2,5,6,-1,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//第一个for循环，总排序次数
	for (int i = 0; i < n - 1; i++) {
		//第二个for循环，每次排序中的对比次数
		for (int j = 0; j < n - 1 - i; j++) {
			//
			if (arr[j] > arr[j + 1]) {
				int tem = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
			}
		}
	}

	//遍历排序后的数组
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}
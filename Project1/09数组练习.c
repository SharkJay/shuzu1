#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main09() {

	//int a[] = { 3,2,4,5,6,7,1,4,5,6324,11111,23442,1223142,34345,46564,2344,252343,46546547,543432432,234543 };
	//int max = a[0];
	//for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
	//	if (max < a[i]) {
	//		//赋值
	//		max = a[i];
	//	}
	//}

	//printf("最大值为：%d\n", max);

	//数值交换
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int tem;
	int i = 0;
	//总字节数/单个元素字节数=所有元素个数，数组中元素索引从0开始，则最后一个元素索引为总个数减一
	int j = sizeof(a) / sizeof(a[0]) - 1;
	//i索引大于j时表示整个体系调换完成了，此时应该退出循环
	while (i < j) {
		//用临时元素保存元素i
		tem = a[i];
		//将元素j赋值给元素i，原先的i元素就 不存在了，变成j元素的值
		a[i] = a[j];
		//此时再把tem保存的i元素值赋值给j，实现调换
		a[j] = tem;
		i++;
		j--;
	}

	for (int k = 0; k < sizeof(a) / sizeof(a[0]); k++) {
		printf("%d ", a[k]);
	}

	printf("\n");
	system("pause");
	return 0;
}
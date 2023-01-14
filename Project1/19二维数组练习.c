#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main19() {

	//定义数组，求各科平均分，各科不及格人数
	float a[5][3] = { { 80, 75, 56 }, { 59, 65, 71 }, { 59, 63, 70 }, { 85, 45, 90 }, { 76, 77, 45 } };

	//定义平均分数组，三科平均分存在此数组中
	float average[3];
	//定义三科每科目不及格人数数组，所有的成员都设置为0
	int low[3] = { 0 };

	//定义每个科目分数总分
	//不以f结尾的常量是double类型，以f结尾的常量(如3.14f)是float类型。
	float sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			sum += a[j][i];//j是行，i是列
			if (a[j][i] < 60) {
				low[i]++;//数组low初始元素对应加1
			}
		}
		//计算均值
		average[i] = sum / 5;
		//sum重置，进入下一个for循环
		sum = 0;
	}

	//遍历平均分数组
	for (int i = 0; i < 3; i++) {
		//保留两位小数
		printf("%.2f ", average[i]);
	}
	printf("\n");

	printf("---------------------\n");

	//遍历每个科目不及格人数数组
	for (int i = 0; i < 3; i++) {
		printf("%d ", low[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}
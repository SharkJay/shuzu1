#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main19() {

	//�������飬�����ƽ���֣����Ʋ���������
	float a[5][3] = { { 80, 75, 56 }, { 59, 65, 71 }, { 59, 63, 70 }, { 85, 45, 90 }, { 76, 77, 45 } };

	//����ƽ�������飬����ƽ���ִ��ڴ�������
	float average[3];
	//��������ÿ��Ŀ�������������飬���еĳ�Ա������Ϊ0
	int low[3] = { 0 };

	//����ÿ����Ŀ�����ܷ�
	//����f��β�ĳ�����double���ͣ���f��β�ĳ���(��3.14f)��float���͡�
	float sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			sum += a[j][i];//j���У�i����
			if (a[j][i] < 60) {
				low[i]++;//����low��ʼԪ�ض�Ӧ��1
			}
		}
		//�����ֵ
		average[i] = sum / 5;
		//sum���ã�������һ��forѭ��
		sum = 0;
	}

	//����ƽ��������
	for (int i = 0; i < 3; i++) {
		//������λС��
		printf("%.2f ", average[i]);
	}
	printf("\n");

	printf("---------------------\n");

	//����ÿ����Ŀ��������������
	for (int i = 0; i < 3; i++) {
		printf("%d ", low[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}
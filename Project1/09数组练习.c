#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main09() {

	//int a[] = { 3,2,4,5,6,7,1,4,5,6324,11111,23442,1223142,34345,46564,2344,252343,46546547,543432432,234543 };
	//int max = a[0];
	//for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
	//	if (max < a[i]) {
	//		//��ֵ
	//		max = a[i];
	//	}
	//}

	//printf("���ֵΪ��%d\n", max);

	//��ֵ����
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int tem;
	int i = 0;
	//���ֽ���/����Ԫ���ֽ���=����Ԫ�ظ�����������Ԫ��������0��ʼ�������һ��Ԫ������Ϊ�ܸ�����һ
	int j = sizeof(a) / sizeof(a[0]) - 1;
	//i��������jʱ��ʾ������ϵ��������ˣ���ʱӦ���˳�ѭ��
	while (i < j) {
		//����ʱԪ�ر���Ԫ��i
		tem = a[i];
		//��Ԫ��j��ֵ��Ԫ��i��ԭ�ȵ�iԪ�ؾ� �������ˣ����jԪ�ص�ֵ
		a[i] = a[j];
		//��ʱ�ٰ�tem�����iԪ��ֵ��ֵ��j��ʵ�ֵ���
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
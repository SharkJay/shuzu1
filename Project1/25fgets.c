#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main25() {

	//�����ַ����鲢������
	char ch[1024] = { 0 };
	//fgets������һ������Ĳ�����ŵ�ch�����У������������������ٸ��ַ������������ӱ�׼�����������
	fgets(ch, sizeof(ch), stdin);
	//strlen�⺯���������ַ����鹲���ж�����Ч�ַ�����һ��Ϊ���һ����Ч�ַ�\n�������е���������\n����0���ﵽȥ��\n��Ч��
	ch[strlen(ch) - 1] = 0;
	printf("%s\n", ch);

    /*����0(���ַ���\0���ȼ�)��β��char�������һ���ַ�����
	�����char����û��������0��β����ô�Ͳ���һ���ַ�����ֻ����ͨ�ַ����飬�����ַ�����һ�������char�����顣*/

	/*char ch[1024] = "helloA";
	int i = 0;
	while (ch[i] != '\0') {
		i++;
	}*/
	//printf("%d\n", i);
	system("pause");
	return 0;
}
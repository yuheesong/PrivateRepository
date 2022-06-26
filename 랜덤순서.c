#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>                     //������ ���

const char* __color_start = "[1;32;40m";
const char* __color_end = "[0m";
typedef struct inform{
	char name[30];
	int num;
}inform;


int main(void) {
	int total ;
	inform info[10];
	printf("%s", __color_start);

	printf("-----------------------------------------------------------l\n");
	printf("l           ��-----��                                        l\n");
	printf("l           ��  ? ��    Deciding the Random Order          l\n");
	printf("l           ��-----��                                        l\n");
	printf("l                                                          l\n");
	printf("l                                                          l\n");
	printf("l       ��      ��      ��                                 l\n");
	printf("l      /�ӡ�   /�ӡ�   /�ӡ�                               l\n");
	printf("l       ��      ��      ��                                 l\n");
	printf("l                                                          l\n");
	printf("-----------------------------------------------------------l\n");
	printf("%s", __color_end);

	printf("\n����̼� ������ ���ΰ���? (�ִ� 10�� ����): ");
	scanf("%d", &total);
	printf("\n");

	for (int i = 0; i < total; i++) {
		printf(">> �̸��� �Է��Ͻÿ�: ");
		scanf("%s", info[i].name);                         //����: string�̹Ƿ� %c�� �ƴ� %s�� �����Ѵ�.

	}

	for (int i = 0; i < total;i++) {
		int randnum =1+(rand()% total);                   //�����߻���
		info[i].num = randnum;
	
		for (int j = 0; j < i ; j++) {                   //�ߺ��ȼ����� �˻�
			if (randnum == info[j].num) {
				i = i - 1;
				break;          
			}
		}
		
	}
	printf("\n");
	/* ù��° ���: ���� ������� �Է��� �̸� ������� ���
	printf("---------------------------------------\n");
	printf("   �̸�           ����\n");
	printf("---------------------------------------\n");
	for (int i = 0;i < total;i++) {
		printf("   %s            %d\n", info[i].name, info[i].num);
	}
	*/

	printf("---------------------------------------\n");
	printf("   �̸�           ����\n");
	printf("---------------------------------------\n");
	for (int j=1 ;j < total+1;j++) {
		for (int i = 0;i < total;i++) {
			if (j == info[i].num) {
				printf("   %s            %d\n", info[i].name, info[i].num);
			}
		}
	}
	printf("\n---------------------------------------");
	printf("\n  ����: ");
	for (int j = 1;j < total + 1;j++) {
		for (int i = 0;i < total;i++) {
			if (j == info[i].num) {
				printf("%s  ", info[i].name);
			}
		}
	}
	printf("\n---------------------------------------\n");
	return 0;
}
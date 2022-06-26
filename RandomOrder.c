#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>                     //난수의 사용

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
	printf("l           ┌-----┐                                        l\n");
	printf("l           ㅣ  ? ㅣ    Deciding the Random Order          l\n");
	printf("l           └-----┘                                        l\n");
	printf("l                                                          l\n");
	printf("l                                                          l\n");
	printf("l       ○      ○      ○                                 l\n");
	printf("l      /ㅣ＼   /ㅣ＼   /ㅣ＼                               l\n");
	printf("l       ㅅ      ㅅ      ㅅ                                 l\n");
	printf("l                                                          l\n");
	printf("-----------------------------------------------------------l\n");
	printf("%s", __color_end);

	printf("\n몇명이서 진행할 것인가요? (최대 10명 가능): ");
	scanf("%d", &total);
	printf("\n");

	for (int i = 0; i < total; i++) {
		printf(">> 이름을 입력하시오: ");
		scanf("%s", info[i].name);                         //주의: string이므로 %c가 아닌 %s가 들어가야한다.

	}

	for (int i = 0; i < total;i++) {
		int randnum =1+(rand()% total);                   //난수발생기
		info[i].num = randnum;
	
		for (int j = 0; j < i ; j++) {                   //중복된수인지 검사
			if (randnum == info[j].num) {
				i = i - 1;
				break;          
			}
		}
		
	}
	printf("\n");
	/* 첫번째 방법: 순서 상관없이 입력한 이름 순서대로 출력
	printf("---------------------------------------\n");
	printf("   이름           순서\n");
	printf("---------------------------------------\n");
	for (int i = 0;i < total;i++) {
		printf("   %s            %d\n", info[i].name, info[i].num);
	}
	*/

	printf("---------------------------------------\n");
	printf("   이름           순서\n");
	printf("---------------------------------------\n");
	for (int j=1 ;j < total+1;j++) {
		for (int i = 0;i < total;i++) {
			if (j == info[i].num) {
				printf("   %s            %d\n", info[i].name, info[i].num);
			}
		}
	}
	printf("\n---------------------------------------");
	printf("\n  순서: ");
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

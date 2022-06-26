#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>                     //≥≠ºˆ¿« ªÁøÎ

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
	printf("l           ¶£-----¶§                                        l\n");
	printf("l           §”  ? §”    Deciding the Random Order          l\n");
	printf("l           ¶¶-----¶•                                        l\n");
	printf("l                                                          l\n");
	printf("l                                                          l\n");
	printf("l       °€      °€      °€                                 l\n");
	printf("l      /§”°¨   /§”°¨   /§”°¨                               l\n");
	printf("l       §µ      §µ      §µ                                 l\n");
	printf("l                                                          l\n");
	printf("-----------------------------------------------------------l\n");
	printf("%s", __color_end);

	printf("\n∏Ó∏Ì¿Ãº≠ ¡¯«‡«“ ∞Õ¿Œ∞°ø‰? (√÷¥Î 10∏Ì ∞°¥…): ");
	scanf("%d", &total);
	printf("\n");

	for (int i = 0; i < total; i++) {
		printf(">> ¿Ã∏ß¿ª ¿‘∑¬«œΩ√ø¿: ");
		scanf("%s", info[i].name);                         //¡÷¿«: string¿Ãπ«∑Œ %c∞° æ∆¥— %s∞° µÈæÓ∞°æﬂ«—¥Ÿ.

	}

	for (int i = 0; i < total;i++) {
		int randnum =1+(rand()% total);                   //≥≠ºˆπﬂª˝±‚
		info[i].num = randnum;
	
		for (int j = 0; j < i ; j++) {                   //¡ﬂ∫πµ»ºˆ¿Œ¡ˆ ∞ÀªÁ
			if (randnum == info[j].num) {
				i = i - 1;
				break;          
			}
		}
		
	}
	printf("\n");
	/* √ππ¯¬∞ πÊπ˝: º¯º≠ ªÛ∞¸æ¯¿Ã ¿‘∑¬«— ¿Ã∏ß º¯º≠¥Î∑Œ √‚∑¬
	printf("---------------------------------------\n");
	printf("   ¿Ã∏ß           º¯º≠\n");
	printf("---------------------------------------\n");
	for (int i = 0;i < total;i++) {
		printf("   %s            %d\n", info[i].name, info[i].num);
	}
	*/

	printf("---------------------------------------\n");
	printf("   ¿Ã∏ß           º¯º≠\n");
	printf("---------------------------------------\n");
	for (int j=1 ;j < total+1;j++) {
		for (int i = 0;i < total;i++) {
			if (j == info[i].num) {
				printf("   %s            %d\n", info[i].name, info[i].num);
			}
		}
	}
	printf("\n---------------------------------------");
	printf("\n  º¯º≠: ");
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
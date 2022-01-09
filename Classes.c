#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Classes.h"
#include <windows.h>


Date getDate() {
	Date date;
	date.day = date.month = date.year = 0; // for bad input protection
	char chDate[9];
	printf(" please, input the Date in format : YYYYMMDD \n");
	scanf("%[^\n]s", chDate);
	if (strlen(chDate) != 8) {
		printf("bat input");
		return date;
	}
	char YYYY[4] = {	chDate[0],
						chDate[1],
						chDate[2],
						chDate[3]};

	char MM[4] = {	chDate[4],
					chDate[5]};

	char DD[4] = {	chDate[6],
					chDate[7] };

	date.year = atoi(YYYY);
	date.month = atoi(MM);
	date.day = atoi(DD);

	return date;
}
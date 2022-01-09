#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Classes.h"
#include <windows.h>
#include "filters.h"




void printAnimalsByFilter(filters filter) {
	//array
	//filters

	
	printf("Available filters are: ");
	printf("Input the first filter: ");
}


/*
animals* returnFilteredArray(animals arr,char* filter1, char* filter2, int filtertype) {

	char* filterBy1;
	char* filterBy2;
	int count = 0;
	int arr_sz = sizeof(arr) / sizeof(animals);
	animals* animalsArr = (animals*)malloc(sizeof(animals) * newSZ);
		for (int i = 0; i < arr_sz; i++) {
			if (filtertype == 1) { // bool filter
				if (!strcmp(filter1, "vaccinated")) {
					if(arr.vaccinated)

				}
			}
		}
			
	


}
*/

bool checkExpiredProduct(Date ManufacturingDate, Date validityTime) {
	SYSTEMTIME realTime;
	GetSystemTime(&realTime);
	if (ManufacturingDate.year + validityTime.year< realTime.wYear)
		if (ManufacturingDate.month + +validityTime.month < realTime.wMonth)
			if (ManufacturingDate.day + +validityTime.day < realTime.wDay)
				return true;
	return false;
}


/*
int sellFunction() {
	printf("how whould you like to sell\n");

	int option;
	switch (option)
	{
	case 0:

		break;

	default:
		break;
	}
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Classes.h"
#include <windows.h>







//DEGUB



//customer cust[3] = {
//					{111,"firstFirst","firstSecond",2,3,1,{551} },
//					{222,"secondFirst","secondSecond",4,5,2,{551,552}},
//					{333,"thirdFirst","thirdSecond",6,7,2,{553,554}}
//					};
//int writeToCustomersBfile(customer cust[],char* filename) {

int BoostCustomersBfile() {
	customer cust[3] = {
					{111,"firstFirst","firstSecond",2,3,1,{551} },
					{222,"secondFirst","secondSecond",4,5,2,{551,552}},
					{333,"thirdFirst","thirdSecond",6,7,2,{553,554}}
	};

	FILE* fp;
	fp = fopen("CUSTOMERS", "wb");
	fwrite(cust, sizeof(cust), 1, fp);
	fclose(fp);
}

void BoostAnimalsBfile() {

	Date date1 = { 2020,1,11 };
	Date date2 = { 2018,7,1 };
	Date date3 = { 2014,11,30 };
	Date date4 = { 2011,12,4 };
	Date date5 = { 2010,12,31 };

	animals cust[5] = {
					{date1,111,"cat1","cat","catbreed1","colour1",true,false,false },
					{date2,112,"dog1","dog","dogbreed1","colour2",true,false,false},
					{date3,113,"bird1","bird","birdbreed1","colour3",false,true,false},
					{date4,114,"cat2","cat","catbreed1","colour4",false,true,false},
					{date5,115,"dog2","dog","dogbreed2","colour5",false,true,false}
	};

	FILE* fp;
	fp = fopen("ANIMALS", "wb");
	fwrite(cust, sizeof(cust), 1, fp);
	fclose(fp);
}

void BoostItemsBfile() {
	Date date1 = { 2020,1,11 };
	Date date2 = { 2018,7,1 };
	Date date3 = { 2014,11,30 };
	Date date4 = { 2011,12,4 };
	Date date5 = { 2010,12,31 };

	Date edate1 = { 0,0,15 };
	Date edate2 = { 0,6,0 };
	Date edate3 = { 1,6,0};
	Date edate4 = { 0,6,0 };
	Date edate5 = { 1,0,0 };

	storeItems cust[5] = {
					{12,date1,edate1,5,"item1","cat",false},
					{44.3,date2,edate2,10,"item2","cat",false},
					{13.2,date3,edate3,1,"item3","dog",true},
					{11,date4,edate4,2,"item4","dog",true},
					{9,date5,edate5,4,"item5","bird",false}
	};

	FILE* fp;
	fp = fopen("ITEMS", "wb");
	fwrite(cust, sizeof(cust), 1, fp);
	fclose(fp);
}


void PrintCustomers() {
	
	FILE* fp;
	fp = fopen("CUSTOMERS", "rb");
	int numOfCustomers = sizeof(fp) / sizeof(customer);
	customer cust; // TODO redo
	for(int i=0; i< numOfCustomers;i++){
		if (feof(fp))
			break;
		fread(&cust, sizeof(cust), 1, fp);

	}
	printf(1);
}


typedef struct animals_LL {
	animals animal;
	struct alimals_LL* next;
	struct alimals_LL* prev;
}animals_LL;


animals_LL* create_animals_LL() {
	animals_LL* head = malloc(sizeof(animals_LL));
	head->next = NULL;
	head->prev = NULL;
	return head;
}

// create animals_LL node with animal data
// add thil node to LL.


void add_to_LL1(animals_LL** headptr, animals val) {
	if ((*headptr)->next == NULL) {
		(*headptr)->animal = val;
		return;
	}

	animals_LL* tmp = *headptr;
	animals_LL* tmp2 = malloc(sizeof(animals_LL));

	while (tmp->next) {
		tmp = tmp->next;
	}
	tmp->next = tmp2;
	tmp2->prev = tmp;

	tmp2->animal = val;
	tmp2->next = NULL;

}	



void add_to_LL(animals_LL** headptr, animals val) {
	if ((*headptr)->next == NULL) {
		(*headptr)->animal = val;
		return;
	}

	animals_LL* tmp = *headptr;
	animals_LL* tmp2 = malloc(sizeof(animals_LL));

	while (tmp->next) {
		tmp = tmp->next;
	}
	tmp->next = tmp2;
	tmp2->prev = tmp;

	tmp2->animal = val;
	tmp2->next = NULL;

}



animals_LL* PushAnimalsToLL(animals_LL *headptr) {
	
	animals val;
	FILE* fp;
	fp = fopen("ANIMALS", "rb");
	if (!fp) return 1;
	fread(&val, sizeof(animals), 1, fp);
	add_to_LL(headptr, val);
	while (fread(&val, sizeof(animals), 1, fp) > 0) {
		add_to_LL(headptr, val);

	}

	fclose(fp);
	printf(1);
}



void PushAnimalsToArr() {
	int ElementsNum;
	FILE* fp;
	fp = fopen("ANIMALS", "rb");
	if (!fp) return 1; // todo return
	fseek(fp, 0, SEEK_END);
	ElementsNum = ftell(fp) / sizeof(animals);
	fseek(fp, 0, SEEK_SET);
	animals* animalsArr = (animals*)malloc(sizeof(animals)* ElementsNum);
	for (int i = 0; i < ElementsNum; i++)
		fread(&animalsArr[i], sizeof(animals), 1, fp);
	fclose(fp);
}


void main() {

	//BoostAnimalsBfile();
	//PushAnimalsToArr();
	animals_LL* headptr = create_animals_LL();
	PushAnimalsToLL(&headptr);

}
//animals* returnFilteredArray(animals inpArr,) {
//
//
//
//}





#pragma once
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#define NUM_OF_ANIMALS_TYPES 2
#define MAX_NUM_OF_ANIMAL_IN_CUSTOMER_HOUSE 3
//char* AnimalTypeApproved[NUM_OF_ANIMALS_TYPES] = { "dog", "cat"};

typedef enum { false = 0, true = 1 } bool;

char AnimalTypeApproved;



SYSTEMTIME DateTimeClass; // include in the program
//GetLocalTime(&DateTimeClass);
// add data func and no windows

typedef struct {
	int year;
	int month;
	int day;
} Date;


typedef struct animals {
	Date animalDateOfBirth; // take care of 3 nums
	int animalID;
	char animalName[15]; // take care of input
	char animalType[4];
	char animalBreed[15];
	char animalColour[15];
	bool vaccinated;
	bool trained;
	bool adopted;
}animals;

typedef struct customer {
	int customerID; // take care of 7 nums
	char customerFirstName[15];
	char customerLastName[15]; 
	int numOfResidentsInHouse;
	int numOfRoomsInHouse;
	int numOfaAnimalsInHouse;
	int* IDsOfAnimals[MAX_NUM_OF_ANIMAL_IN_CUSTOMER_HOUSE];
	//animals animalsInHouse[MAX_NUM_OF_ANIMAL_IN_CUSTOMER_HOUSE]; 
}customer;

typedef struct storeItems {
	float price;
	Date ManufacturingDate;
	Date validityTime;
	int unitsInStock;
	char itemName[15];
	char animaltype[4];
	bool deleted;
}storeItems;



typedef struct soldItems {
	Date sellingDate;
	int customerID;
	bool refunded;
}soldItems;


typedef struct employee
{
	char employeeFirstName[15];
	char employeeLastName[15];
	int employeeID;
	char username[15];
	char password[15];
	int level;
}employee;






Date getDate();
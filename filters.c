#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Classes.h"
#include <windows.h>
#include "filters.h"


void init_equal_filters() {

	char animalFilters[9][10] = {
						"type",
						"breed",
						"colour",};
}

void init_bool_filters() {

	char animalFilters[9][10] = { 
							"vaccinated",
							"trained",
							"adopted" };


	char itemFilters[6][10] = { "price", // date of birth
										"MFD", //ManufacturingDate
										"UNST", // unitsInStock
										"name",
										"animaltype",
										"deleted" };

	char customerFilters[5][10] = { "ID",
										"LastName",
										"Nresidents",
										"Nrooms",
										"Nanimals" };

	char employeeFilters[3][10] = { "ID",
										"LastName",
										"level" };

}


filters init_filters() {
	char animalFilters[9][10] = { "DOB",// date of birth
								"ID",
								"name",
								"type",
								"breed",
								"colour",
								"vaccinated",
								"trained",
								"adopted" };

	char itemFilters[6][10] = { "price", // date of birth
										"MFD", //ManufacturingDate
										"UNST", // unitsInStock
										"name",
										"animaltype",
										"deleted" };

	char customerFilters[5][10] = { "ID",
										"LastName",
										"Nresidents",
										"Nrooms",
										"Nanimals" };

	char employeeFilters[3][10] = { "ID",
										"LastName",
										"level" };



}

int b = 5;




